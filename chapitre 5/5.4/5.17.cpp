#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> vec1{0, 1, 1, 2}, vec2{0, 1, 1, 2, 3, 5, 8} , vec_court, vec_long;


    //先挑出来那个短的
    if (sizeof(vec1) > sizeof(vec2))
    {
        vec_court = vec2;
        vec_long = vec1;
    }
    else
    {
        vec_court = vec1;
        vec_long = vec2;
    }

    for (int ix = 0; ix != vec_court.size(); ++ix)
    {
        if (vec_court[ix] != vec_long[ix])
            {
                cout << "false" << endl;
                return 0;
            }
    }
    cout << "true" << endl;
    return 0;
}