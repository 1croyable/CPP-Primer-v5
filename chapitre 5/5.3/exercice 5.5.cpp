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
                if (score == 100)
                    grade += "A+";
                else{
                    if (score >= 90)//如果他是100在上边的if本次循环就已经结束了，所以不用写<=99
                        grade += "A";
                    else{
                        if (score >= 80)
                            grade += "B";
                        else{
                            if (score >= 70)
                                grade += "C";
                            else{
                                if (score >= 60)
                                    grade += "D";
                                else
                                    grade += "FAIL";
                            }
                        }
                    }
                }
                cout << grade << endl;
            }
            else
                cout << "wrong number!" << endl;
        }
}