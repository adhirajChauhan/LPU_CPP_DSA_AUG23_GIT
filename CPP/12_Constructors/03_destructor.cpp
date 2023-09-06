#include <iostream>
using namespace std;

//destructor is used to destroy the object of a class when the scope of object ends

//It has the same name as the class and starts with ~ (tilde)

class Person{
    public:
    Person(){
        cout << "Constructor called" << endl;
    }

    ~Person(){
        cout << "Destructor called" << endl;
    }
};

int main(){
    Person p1, p2;
}

//We can only have one destructor in a class
//A destructor cannot have parameters or return type
//we cannot define destructors in structs
// we cannot overload or inherit destructor