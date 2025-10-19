#include <iostream>
using namespace std;
int main(){
    float students[10];
    int failN = 0, passN = 0;
    for(int i = 0; i < 10; i++){
        cout << "Enter Marks of Student: " << endl;
        cin >> students[i];
    }
    //Failed Students
    for(int i = 0; i < 10; i++){
        if(students[i] < 5 && students[i] >= 0){
            failN = failN + 1;
        }
        else if(students[i] <= 10 && students[i] >=5){
            passN = passN + 1;
        }
        else{
            return -1;
        }
    }
    float pass[passN], avgP;
    int passC = 0, sumP = 0;
    float fail[failN], avgF;
    int failC = 0, sumF = 0;
    for(int i = 0; i < 10; i++){
        if(students[i] < 5 && students[i] >= 0){
            fail[failC] = students[i];
            failC ++;
        }
        else if(students[i] <= 10 && students[i] >=5){
            pass[passC] = students[i];
            passC ++;
        }
    }
    cout << "Array 1 values are = ";
    for(int i = 0; i < passC; i++){
        cout << " || " << pass[i] << " || ";
        sumP = sumP + pass[i];
    }
    cout << endl;

    cout << "Array 2 values are = ";
    for(int i = 0; i < failC; i++){
        cout << " || " << fail[i] << " || ";
        sumF = sumF + fail[i];
    }
    cout << endl;

    avgF = sumF / failC;
    avgP = sumP / passC;

    cout << "Average of Array 1 is = " << avgF << endl;
    cout << "Average of Array 2 is = " << avgP << endl;

    cout << "Pass = " << passC << endl;
    cout << "Fail = " << failC << endl;

    return 0;
}