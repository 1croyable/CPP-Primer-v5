#include <vector>
#include <iostream>
using namespace std;

int ia[6] = {1,2,3,4,5,6};

vector<int> vec{1,2,3,4,5,6};
int* ptr = begin(ia);
int ival = 0;

// (1)ptr != 0 && *ptr++
// 优先级是：后置++ > * > != > &&
// &&只有当两个都是对的才是对的
// 先递增，指针1格，再解引用。先判断ptr不为空，如果它确实不为空，再去看右边的，如果右边的解引用后不是0，那么就是true

// (2)ival++ && ival
// 优先级是：后置++ > &&
// 先递增，递增前的不是0，那么结果就是true

// (3)vec[ival++] <= vec[ival]
// 优先级是：下标运算符 > 后置++ > <=
// 先对两边的vec取下标，然后递增ival并且返回递增前的值，最后比较<=，结果永远是true

int main(){
    cout << ( ptr != 0 && *ptr++ ); 
    cout << (ival++ && ival);
    cout << (vec[ival++] <= vec[ival]);
    return 0;
}