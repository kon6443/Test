#include <iostream>

#define NAME_SIZE 32    // Maximum name length
#define HUMAN_MAX 10

using namespace std;

struct HUMAN {
    char strName[NAME_SIZE];
    int age;
};

void getline(HUMAN *, int iCount);
void getline2(HUMAN);
void showInfo(HUMAN *);

int main(int argc, const char * argv[]) {
    
    //HUMAN Human;
    HUMAN HumanArr[HUMAN_MAX]; int iCount = 0;

    getline(HumanArr, iCount);
    showInfo(HumanArr);
    //getline2(Human);
    
    return 0;
}

void getline(HUMAN *HumanArr, int iCount) {
    
    for(int i=0;i<HUMAN_MAX;i++) {
        cout<<"Enter a name: "; cin.getline(HumanArr[i].strName, NAME_SIZE);
        cout<<HumanArr[i].strName<<endl;
    }
    /*
    cout<<"Enter a name: "; cin.getline(HumanArr[iCount].strName, NAME_SIZE);
    cout<<HumanArr[iCount].strName<<endl;
     */
}
void getline2(HUMAN Human) {
    cout<<"Enter a name: "; cin>>Human.strName;
    cout<<"Name: "<<Human.strName<<endl;
}
void showInfo(HUMAN *HumanArr) {
    for(int i=0;i<HUMAN_MAX;i++) {
        cout<<i+1<<"'s name: "<<HumanArr[i].strName<<endl;
    }
}
