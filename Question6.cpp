#include <iostream>
using namespace std;
int main(){
    int arr1[5];
    int arr2[5];
    int common;
    
    cout << "Array 1" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Enter Marks of Students " << i + 1 << " = ";
        cin >> arr1[i];
    }
    
    cout << "Array 2" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Enter Marks of Students " << i << " = ";
        cin >> arr2[i];
    }

    cout << "Common values are: " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if (arr1[i] == arr2[j]){
                cout << arr1[i];
            }
        }
        cout << endl;
    }  
}