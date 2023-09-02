#include <iostream>
using namespace std;

int* p = nullptr;                   //8   4

bool b = true;                      //1

char c = 'c';//与__int8同义         //1
wchar_t wc = 'c';                   //2
char16_t c16 = 'c';                 //2
char32_t c18 = 'c';                 //4

short s = 1;//与__int16同义         //2
int i = 1;//与__int32同义           //4
long l = 1;                         //4
long long ll = 1;//与__int64同义    //8

float f = 0.0;                      //4
double d = 0.0;                     //8
long double ld = 0.0;               //16

char ca[6] = "Hello";               //6
char *pca = ca;//p指向H             //8   1



int main(){
    cout << sizeof p << endl;
    cout << sizeof *p << endl;
    cout << sizeof b  << endl;
    cout << sizeof c  << endl;
    cout << sizeof wc  << endl;
    cout << sizeof c16  << endl;
    cout << sizeof c18  << endl;
    cout << sizeof s  << endl;
    cout << sizeof i  << endl;
    cout << sizeof l  << endl;
    cout << sizeof ll  << endl;
    cout << sizeof f  << endl;
    cout << sizeof d  << endl;
    cout << sizeof ld  << endl;
    cout << sizeof ca  << endl;
    cout << sizeof pca  << endl;
    cout << sizeof *pca  << endl;
    
    return 0;;
}
//sizeof(类型名) 或 sizeof 表达式
//返回的是字节数（一般一个字节有8位2进制）