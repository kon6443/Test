#include <iostream>

using namespace std;

int reverseArr(int *, int, int);

int main(int argc, const char * argv[]) {
    
    int arr[10] = {};
    cout<<"Before executing the algorithm: ";
    for(int i=0;i<10;i++) {
        arr[i] = i;
        cout<<arr[i]<<", ";
    } cout<<endl;
    
    reverseArr(arr, arr[0], arr[9]);
    
    cout<<"After executing the algorithm: ";
    for(int i=0;i<10;i++) {
        cout<<arr[i]<<", ";
    } cout<<endl;
    
    
    
    return 0;
}

int reverseArr(int *arr, int i, int j) {
    if(i>j) return *arr;
    swap(arr[i], arr[j]);
    i++;
    j--;
    reverseArr(arr, arr[i], arr[j]);
    return *arr;
}
