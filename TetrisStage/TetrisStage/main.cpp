#include "header.hpp"

int main(int argc, const char * argv[]) {
    
    Student StudentArr[STUDENT_MAX];
    int iStudentCount = 0;
    
    cout<<"0: "<<iStudentCount<<endl;
    insertion(StudentArr, iStudentCount);
    cout<<"1: "<<iStudentCount<<endl;
    insertion(StudentArr, iStudentCount);
    cout<<"2: "<<iStudentCount<<endl;
    insertion(StudentArr, iStudentCount);
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

