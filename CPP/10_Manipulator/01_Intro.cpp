//Manipulator - are the special functions that are used to change certain characteristics of i/o and o/p

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a = 123;

    cout << setfill('*') << setw(15) << a << endl;
}