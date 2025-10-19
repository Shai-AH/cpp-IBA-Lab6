#include <iostream>
using namespace std;
int main(){
    int arr[10];
    int value, count = 0;
    for(int i=0; i < 10; i++){
        cout << "Enter " << i+1 << " Number: " << endl; 
        cin >> arr[i];
    }
    cout << "What Number to find: " << endl;
    cin >> value;
    for(int i = 0; i < sizeof(arr); i++){
        if(arr[i] == value){
            count ++;
        }
    }
    if(count != 0){
        cout << "The element asked was found " << count - 1 << " times in array" << endl;
    }
    else{
        cout << "There is no such item in array! ";
    }
    return 0;
}