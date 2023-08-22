#include <iostream>
using namespace std;

//Reference variables
// is a reference to an existing variable

void test(int &n){
    n++;
    cout << "value of n from test method is : " << n << endl;
}

int& test2(int n){
    int num = n;
    int &ans = num;
    return ans;
}

int main(){

    int n;
    cin >> n;

    test2(n);
    // test(n);

    // cout << "value of n from main method is : " << n << endl;

    // string name = "Hello";
    // string &ref = name;

    // cout << name << endl;
    // cout << ref << endl;

    // int a = 5;

    // int &b = a;

    // cout << a << endl;
    // a++;
    // cout << a << endl;
    // b++;
    // cout << a << endl;

}