/*总结string对象
一、初始化方式：
默认是空字符串

拷贝初始化（使用等号）：
string s2 = s1；         使用另一个对象
string s3 = "value";     使用字面值常量

直接初始化（使用括号）：
string s2(s1);           使用另一个对象
string s3("value")       使用字面值常量
string s4(n,'c');        使用n个字符

细节：
使用字面值初始化string，C风格字符串"value"后带有\0表示结尾，但是string里没有，在string里就是value

二、操作
运算符：
os << s
is >> s                读写操作
s[n]                   下标运算符
s1 + s2                返回s1和s2连接后的结果，加法运算符返回左侧运算对象，要保证s1是string对象才能使用，s1或s2可以是C风格字符串
s1 = s2                拷贝赋值运算符
s1 == s2
s1 != s2               
<,<=,>,>=              比较运算符，对大小写敏感

非成员函数：
getline(is, s)          读取一整行（忽略空白符）

成员函数：
s.empty()               查询是否为空
s.size()                查询字符个数

数据成员：
string::size_type
*/