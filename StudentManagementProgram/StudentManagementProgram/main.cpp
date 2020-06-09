#include "header.hpp"

int main(int argc, const char * argv[]) {
    
    Student StudentArr[STUDENT_MAX];
    int iStudentCount = 0;
    
    cout<<"0: "<<iStudentCount<<endl;
    strcpy(StudentArr[0].strName, "one");
    StudentArr[0].iNumber = 1;
    StudentArr[0].iKor = 10;
    StudentArr[0].iEng = 10;
    StudentArr[0].iMath = 10;
    iStudentCount++;
    
    cout<<"1: "<<iStudentCount<<endl;
    strcpy(StudentArr[1].strName, "two");
    StudentArr[1].iNumber = 2;
    StudentArr[1].iKor = 20;
    StudentArr[1].iEng = 20;
    StudentArr[1].iMath = 20;
    iStudentCount++;
    
    cout<<"2: "<<iStudentCount<<endl;
    strcpy(StudentArr[2].strName, "three");
    StudentArr[2].iNumber = 3;
    StudentArr[2].iKor = 30;
    StudentArr[2].iEng = 30;
    StudentArr[2].iMath = 30;
    iStudentCount++;
    
    cout<<"3: "<<iStudentCount<<endl;
    output(StudentArr, iStudentCount);
    
    /*
    while(true) {
        switch(introduction2()) {
            case MENU_INSERT:   //1
                cout<<"==========INSERT=========="<<endl;
                insertion(StudentArr, iStudentCount);
                break;
                
            case MENU_DELETE:   //2
                //system("clear");
                cout<<"==========DELETE=========="<<endl;
                deletion(StudentArr, iStudentCount);
                break;
                
            case MENU_SEARCH:   //3
                cout<<"==========SEARCH=========="<<endl;
                search(StudentArr, iStudentCount);
                break;
                
            case MENU_OUTPUT:   //4
                cout<<"==========OUTPUT=========="<<endl;
                output(StudentArr, iStudentCount);
                break;
                
            case MENU_EXIT:     //5
                break;
            default :
                cout<<"Enter again"<<endl;
        }
    }
    */
    return 0;
}

