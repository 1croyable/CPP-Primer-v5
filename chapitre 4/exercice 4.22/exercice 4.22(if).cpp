#include <iostream>
#include <string>
using namespace std;

int main()
{
    int grade;
    string finalgrade;
    cin >> grade;

    if (grade >= 90 && grade <= 100)
        finalgrade = "high pass";
    else
    {
        if (grade >= 75 && grade < 90)
            finalgrade = "pass";
        else
        {
            if (grade >= 60 && grade < 75)
                finalgrade = "low pass";
            else
            {
                if (grade >= 0 && grade < 60)
                    finalgrade = "fail";
                else
                {
                    finalgrade = "wrong number";
                }
            }
        }
    }

    cout << finalgrade;
    return 0;
}
//其实用switch会更好
//if看起来更清晰点