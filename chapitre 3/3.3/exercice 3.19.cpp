#include <vector>
using namespace std;

int main(){
    //1、值初始化
    vector<int> v1(10,42);
    //2、列表初始化
    vector<int> v2{42,42,42,42,42,42,42,42,42,42};
    //3、拷贝初始化
    vector<int> v3 = {42,42,42,42,42,42,42,42,42,42};
    
    return 0;
}