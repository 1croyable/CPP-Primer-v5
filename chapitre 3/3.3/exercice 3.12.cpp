#include <vector>
#include <string>
using namespace std;

int main(){
    vector<vector<int>> ivec;//这里有的编译器可能会报错，因为<int>>紧接着有2个>符号，可能被识别成位运算符>>
    vector<string> svec = ivec;//这里定义有问题，ivec是int的vector，但是svec是string的vector
    vector<string> svec(10, "null");//正确，直接初始化

    return 0;
}