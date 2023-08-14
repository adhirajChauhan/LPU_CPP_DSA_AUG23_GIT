#include <iostream>
using namespace std;

class B; //Forward declaration
class A{
    int data;

    public:

    void setValue(int value){
        data = value;
    }

    friend void add(A,B);
};

class B{
    int data;

    public:
    void setValue(int value){
        data = value;
    }

    friend void add(A,B);
};

void add(A obj1, B obj2){
    cout << "Adding object value of A and B : " << obj1.data + obj2.data << endl;
}

int main(){
    A a1;
    a1.setValue(10);

    B b1;
    b1.setValue(5);

    add(a1, b1);
}