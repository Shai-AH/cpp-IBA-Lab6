#include <iostream>
using namespace std;
int main(){
    float arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0 ; i < n; i++){
        cout << "Enter " << i+1 << " Number: " << endl; 
        cin >> arr[i];
    }
    int Boundary = n - 1;
    bool flag = true;
    while (flag){
        flag = false;
        for (int j = 0; j < Boundary; j++) {
            if (arr[j] < arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        Boundary = Boundary - 1;
    }
    for(int i = 0; i < n; i++){
        cout << "Number: " << arr[i] << endl;
    }
}