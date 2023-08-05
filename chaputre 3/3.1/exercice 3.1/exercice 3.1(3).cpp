#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    cout << "Enter 2 integers, val1 < val2" << endl;

    int val1, val2;
    cin >> val1 >> val2;
    
    cout << "between " << val1 << " and " << val2 << " : ";
    while(val1 != val2 -1){
        ++val1;
        cout << val1 << " ";
    }
    cout << " ";

    return 0;
}