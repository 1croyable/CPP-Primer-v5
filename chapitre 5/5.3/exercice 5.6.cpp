// 我们实现一个100分A+ 90~99 A 80~89 B 70~79 C 60~69 D 0~59 FAIL
#include <iostream>
#include <string>
using namespace std;

int main(){
    int score;
    
    while(cin >> score)
        {
            string grade = "";//每次循环会重置本次的grade
            //只有在0~100范围内才处理
            if (score >= 0 && score <= 100)
            {
                  (score == 100) ? (grade += "A+")
                : (score >= 90) ? (grade += "A")
                : (score >= 80) ? (grade += "B")
                : (score >= 70) ? (grade += "C")
                : (score >= 60) ? (grade += "D")
                : (grade += "FAIL");
                
                cout << grade << endl;
            }
            else
                cout << "wrong number!" << endl;
        }
}