//当计算的结果超出该类型所能表示的范围时就会产生溢出
//假设某个机器的short类型占16位，则最大的short数值是32767，这时以下语句就会溢出：
#include <iostream>
using namespace std;

int main(){
    short short_value=32767;
    short_value += 1;
    cout << "short_value: " << short_value << endl;
    //发生了“环绕”
    return 0;
}