#include <iostream>

int main()
{
    int null = 0, *p = null;//错误,不能把int变量直接赋值给指针，即使它的值是0也不行（P49）
    
    int null = 0, *p = nullptr;

    return 0;
}