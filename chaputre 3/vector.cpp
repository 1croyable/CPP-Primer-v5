/*总结vector容器
一、初始化方式：
默认是空字符串

拷贝初始化（使用等号）：
vector<T> v2 = v1；         使用另一个对象
vector<T> v = {a,b,c,...};     使用列表

直接初始化（使用括号）：
vector<T> v2(v1);                             使用另一个对象
vector<T> v(p1,p2);                           使用一对指针

值初始化：
vector<T> v(n,val);或者vector<T> v(n)

列表初始化(使用花括号)：
vector<T> v{a,b,c,...}


二、操作
运算符：
v[n]                                     下标运算符
v1 = v2或v1 = {a,b,c,...}                拷贝赋值运算符
s1 == s2
s1 != s2               
<,<=,>,>=                                比较运算符

成员函数：
v.empty()                                查询是否为空
v.size()                                 查询字符个数
v.pushback(t)                            尾端添加元素

三、数据成员
iterator                                 迭代器
*/