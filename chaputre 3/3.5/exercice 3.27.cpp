using namespace std;

int txt_size()
{
    return 100;
}

int main()
{
    unsigned buf_size = 1024;
    //a
    int ia[buf_size];//正确，ia是一个最多存放1024个int的数组
    //b
    int ib[4*7-14];//正确
    //c
    int ia[txt_size()];//正确
    //d
    char st[11] = "fundamental";//不合法，字符串中还有一个\0符号
}