#include <iostream>
using namespace std;

//operator overloading -> we can overload an operator as long as we are operating on user-defined types like objects and structures
//we cannot use operator overloading for basic types such as int, double etc.

//it's a COMPILE TIME POLYMORPHISM

class Count{
    int value;

    public:
    Count(){
        value = 10;
    }

    void operator ++(){
        value = value + 2;
    }

    void display(){
        cout << "Count : " << value << endl;
    }
};

int main(){

    Count count1;
    int x = 20;

    // count1.display();

    ++x;
    // ++count1;   

    cout << x; 

    // count1.display();
}