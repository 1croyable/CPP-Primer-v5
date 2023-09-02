#include <iostream>
#include <string>
using namespace std;

int main(){
    int grade;
    string finalgrade;
    cin >> grade;
    finalgrade = (grade >= 90 && grade <= 100) ? "high pass"
                              : (grade >= 75 && grade < 90) ? "pass"
                              : (grade >= 60 && grade < 75) ? "low pass"
                              : (grade >= 0 && grade < 60) ? "fail" 
                              : "wrong number";
    cout << finalgrade;
    return 0;
}