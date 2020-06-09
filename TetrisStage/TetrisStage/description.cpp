#include "header.hpp"

void render() {
    for(int i=0;i<STAGE_HEIGHT+1;i++) {
        for(int j=0;j<STAGE_WIDTH+2;j++) {
            if(i==0&&(j==0||j==STAGE_WIDTH+1)) {
                cout<<"▦ ";
            } else if(j==0) {
                cout<<"▦ ";
            } else if(i==STAGE_HEIGHT) {
                cout<<"▦";
            } else if(j==STAGE_WIDTH+1) {
                cout<<"▦ ";
            } else cout<<" ";
        }
        cout<<endl;
    }
}
bool rectangle() {
    
    return true;
}
int introduction() {
    int iMenu;
    do {
        cout<<"==========MENU=========="<<endl;
        cout<<"1. Insert."<<endl;
        cout<<"2. Delete."<<endl;
        cout<<"3. Search."<<endl;
        cout<<"4. Output."<<endl;
        cout<<"========================"<<endl;
        cout<<"Enter a number you want to execute: ";cin>>iMenu;
        while(cin.fail()) { // if a user typed a character, this will be executed.
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout<<"You can only type numbers."<<endl;
                cout<<"Enter a menu you want: "; cin>>iMenu; }
    } while (!((iMenu>0)&&(iMenu<5)));
    return iMenu;
}

int introduction2() {
    int iMenu=0;
    cout<<"==========MENU=========="<<endl;
    cout<<"1. Insert."<<endl;
    cout<<"2. Delete."<<endl;
    cout<<"3. Search."<<endl;
    cout<<"4. Output."<<endl;
    cout<<"========================"<<endl;
    cout<<"Enter a number you want to execute: "; cin>>iMenu;
    /*
    if(cin.fail()) {
        cin.clear();
        cin.ignore(1024, '\n');
        cout<<"You can only enter a number."<<endl;
    }
    */
    return iMenu;
}
void insertion(Student *StudentArr, int &iStudentCount) {
    cout<<"Enter a name you want to enter: "; cin.getline(StudentArr[iStudentCount].strName, NAME_SIZE);
    cout<<"Enter a phone number you want to enter: "; cin>>StudentArr[iStudentCount].iNumber;
    cout<<"Enter a KOR score you want to enter: "; cin>>StudentArr[iStudentCount].iKor;
    cout<<"Enter a ENG score you want to enter: "; cin>>StudentArr[iStudentCount].iEng;
    cout<<"Enter a MATH score you want to enter: "; cin>>StudentArr[iStudentCount].iMath;
    StudentArr[iStudentCount].iTotal = (StudentArr[iStudentCount].iKor + StudentArr[iStudentCount].iEng + StudentArr[iStudentCount].iMath);
    iStudentCount++;
}
void deletion(Student *StudentArr, int &iStudentCount) {
    char studentTemp[NAME_SIZE] = {};
    cout<<"Enter a name you want to delete: "; cin.getline(studentTemp, NAME_SIZE);
    for(int i=0;i<STUDENT_MAX;i++) {
        if(strcmp(StudentArr[iStudentCount].strName, studentTemp) == 0) {
            for(int j=i;j<iStudentCount-1;j++) {
                StudentArr[j]=StudentArr[j+1];
            }
            iStudentCount--;
            break;
        }
    }
}
void search(Student *StudentArr, int iStudentCount) {
    char studentTemp[NAME_SIZE] = {};
    cout<<"Enter a name you want to search: "; cin.getline(studentTemp, NAME_SIZE);
    for(int i=0;i<STUDENT_MAX;i++) {
        if(strcmp(StudentArr[iStudentCount].strName, studentTemp) == 0) {
            cout<<"========================"<<endl;
            cout<<"Name: "<<StudentArr[i].strName<<endl;
            cout<<"Phone #: "<<StudentArr[i].iNumber<<endl;
            cout<<"KOR score: "<<StudentArr[i].iKor<<endl;
            cout<<"ENG score: "<<StudentArr[i].iEng<<endl;
            cout<<"MATH score: "<<StudentArr[i].iMath<<endl;
            cout<<"TOTAL score: "<<StudentArr[i].iTotal<<endl;
            cout<<"========================"<<endl;
            break;
        }
        cout<<"There is no matched name you are looking for."<<endl;
    }
}
void output(Student *StudentArr, int iStudentCount) {
    for(int i=0;i<iStudentCount;i++) {
        cout<<"========================"<<endl;
        cout<<"Name: "<<StudentArr[i].strName<<endl;
        cout<<"Phone #: "<<StudentArr[i].iNumber<<endl;
        cout<<"KOR score: "<<StudentArr[i].iKor<<endl;
        cout<<"ENG score: "<<StudentArr[i].iEng<<endl;
        cout<<"MATH score: "<<StudentArr[i].iMath<<endl;
        cout<<"TOTAL score: "<<StudentArr[i].iTotal<<endl;
        cout<<"========================"<<endl;
    }
}
