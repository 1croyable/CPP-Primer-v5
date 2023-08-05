using namespace std;
int main()
{
    // decltype可以保留顶层const，而auto不能（auto &除外）
    //与auto不同，decltype的结果类型与表达式形式密切相关（加括号和不加括号）

    //一、不同
    const int i = 1;
    auto a = i;        // a是int
    decltype(i) b = 2; // b是const int，因为是常量，所以必须设定初值

    //二、相同
    const int *p = &i;
    auto p1 = p;         // p1是const int*，且指向i
    decltype(p) p2 = &i; // p2是const int*，且指向i

    return 0;
}