#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <pwd.h>
#include <grp.h>

int isDir(struct stat *fileStat);
int printSubDir(char *path);
int countNumber(struct stat *fileStat, char *path, int *);
int countDir(struct stat *fileStat, char *path);
void displayFileName(struct dirent *file);
int fileCheck(struct stat *fileStat);

int main(int argc, char *argv[]) {
    
    DIR *d = NULL;
    struct dirent *file = NULL;
    struct stat fileStat;
    int num = 0;
    char path[1024];
    
    strcpy(path, argv[1]);
    
    if(argc == 2) { // when the number of parameter is only one.
        if(strcmp(path, ".") == 0) { // ./dopen .
            countNumber(&fileStat, path, &num);
            printf("%d\n", num);
        } else {    // ./dopen path
            countNumber(&fileStat, path, &num);
            printf("%d\n", num);
        }
    } else {
        printf("argument must be 2.\n");
        return 1;
    }
    
    return 0;
}

int countDir(struct stat *fileStat, char *path) {
    DIR *d = NULL;
    struct dirent *file = NULL;
    int temp = 0;
    
    if((d = opendir(path)) == NULL) {
        fprintf(stderr, "%s directory is not found.\n", path);
        exit(1);
    } chdir(path);
    while((file = readdir(d)) != NULL) { //
        if(stat(file->d_name, fileStat) == -1){
            perror("Error : \n");
            exit(1);
        }
        if(file->d_name[0]=='.') continue;
        if((fileCheck(fileStat))) {
            temp = temp + 1;
        }
    }
    closedir(d);
    return temp;
}

int countNumber(struct stat *fileStat, char *path, int *num) {
    DIR *d = NULL;
    struct dirent *file = NULL;
    int dirNum = 0;
    int dirFlag[1024];
    for(int i=0;i<sizeof(dirFlag)/sizeof(int);i++) {
        dirFlag[i] = 0;
    }
    printf("countDir: %d\n", countDir(fileStat, path));
    if((d = opendir(path)) == NULL) {
        fprintf(stderr, "%s directory is not found.\n", path);
        exit(1);
    } chdir(path);
    
    while((file = readdir(d)) != NULL) {
        if(stat(file->d_name, fileStat) == -1){    // -1 means error occured when the file is read.
            perror("Error : \n");
            exit(1);
        }
        if(file->d_name[0]=='.') continue;
        if((fileCheck(fileStat))) { // &&(dirNum <= countDir(fileStat, path))
            dirNum = dirNum + 1;
            countNumber(fileStat, file->d_name, num);
        }
        printf("%d", fileCheck(fileStat));
        displayFileName(file); printf("\t");
        *num = *num + 1;
    }  printf("%d\n", *num);
    closedir(d);
    return 0;
}

int fileCheck(struct stat *fileStat) {
    return S_ISDIR(fileStat->st_mode) ? 1 : 0;
}

       
int isDir(struct stat *fileStat) {
    return (S_ISDIR(fileStat->st_mode) ?  1 : 0);
}

void displayFileName(struct dirent *file) {
    printf("%s ", file->d_name);
    return ;
}
