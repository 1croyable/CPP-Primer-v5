#include <iostream>
using namespace std;

int get_value(){
    int i;
    cout << "Enter an integer: ";
    cin >> i;
    cout << endl;
    return i;
}

int main(){
    if (int i = get_value())
        cout << i << " true " << endl;
    else 
        cout << i << " false " << endl;
    return 0;
}