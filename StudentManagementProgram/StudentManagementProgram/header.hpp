#include <iostream>
#include <cstring>

#define STAGE_HEIGHT 20 //
#define STAGE_WIDTH 20  //

#define NAME_SIZE 32    // Maximum name length
#define STUDENT_MAX 10  // 10 people

using namespace std;

enum MENU{
    MENU_NONE,      //0
    MENU_INSERT,    //1
    MENU_DELETE,    //2
    MENU_SEARCH,    //3
    MENU_OUTPUT,    //4
    MENU_EXIT       //5
};


struct Student{
    char strName[NAME_SIZE];
    int iNumber;
    int iKor;
    int iEng;
    int iMath;
    int iTotal;
};

void render();
bool rectangle();
int introduction();
int introduction2();
void insertion(Student *, int &);
void deletion(Student *, int &);
void search(Student *, int );
void output(Student *, int );

