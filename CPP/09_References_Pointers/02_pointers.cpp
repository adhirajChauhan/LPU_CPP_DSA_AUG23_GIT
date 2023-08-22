#include <iostream>
using namespace std;

int main(){
    // int a = 5;
    // cout << &a << endl;

    int var = 10;
    int *ptr = &var;

    double d = 10.5;
    double *ptr2 = &d;


    cout << &var << endl; //Address of var
    cout << ptr << endl; //Address of var
    cout << *ptr << endl; //derefrencing the pointer

    cout << sizeof(ptr) << endl;
    cout << sizeof(ptr2) << endl;

}