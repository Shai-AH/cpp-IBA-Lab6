#include <iostream>
using namespace std;
int main(){
    float arr[6];
    int n = (sizeof(arr) / sizeof(arr[0])) - 1;
    bool flags = 0;
    for(int i=0 ; i < 6; i++){
        cout << "Enter " << i+1 << " Number: " << endl; 
        cin >> arr[i];
    }
    int mid = (sizeof(arr) / sizeof(arr[0]))/2;
    for(int i=0 ; i < mid; i++){
        if(arr[i] == arr[n - i]){
            flags = flags + 1;
        }
    }
    if(flags != 0){
        cout << "Symmetric";
    }
    else{
        cout << "Not Symmetric";
    }
}
