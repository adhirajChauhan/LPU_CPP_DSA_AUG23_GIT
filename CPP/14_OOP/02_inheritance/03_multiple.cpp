#include <iostream>
using namespace std;

//mutiple inheritance - when one child class inherits from two or more classes.

class A{
    public:
    // int a;
    // void get_a(int n){
    //     a = n;
    // }
    void display(){
        cout << "Class A" << endl;
    }
};

class B{
    public:
    // int b;
    // void get_b(int n){
    //     b = n;
    // }

    void display(){
        cout << "Class B" << endl;
    }
};

class C : public A, public B{
    public:
    // void display(){
    //     cout << "Value of a is : " << a << endl;
    //     cout << "Value of b is : " << b << endl;
    //     cout << "Sum of a and b : " << a + b << endl;
    // }

    void print(){
        A::display();
    }
};



int main(){

    C c1;
    // c1.get_a(2);
    // c1.get_b(4);

    // c1.display();
}