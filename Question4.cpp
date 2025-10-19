#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    float arr[6];
    float sum = 0, avg;
    for(int i = 0; i < 6; i++){
        arr[i] = (double) rand()/RAND_MAX;
    }
    for(int i = 0; i < 6; i++){
        cout << "Array elements are = " << arr[i] << endl;
    }
    for(int i = 0; i < 6; i++){
        sum = sum + arr[i];
    }
    avg = sum / 6;
    cout << "Sum is = " << sum << endl;
    cout << "Average is = " << avg << endl;
}