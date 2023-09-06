#include <iostream>
using namespace std;

class Number{
    int a;

    public:
    Number(){
        cout << "Default constructor" << endl;
        a = 0;
    }

    Number(int num){
        cout << "Param constructor" << endl;

        a = num;
    }

    Number(Number &obj){
        cout << "Copy constructor" << endl;
        a = obj.a;
    }

    void display(){
        cout << "The value of a is : " << a << endl;
    }

};

int main(){
    Number n1;
    n1.display();
    Number n2(10);
    n2.display();

    Number n3(n1);
    n3.display();
}