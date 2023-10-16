#include <iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout << "Constructor of base class" << endl;
    }
    virtual ~Base(){
        cout << "Destructor of base class" << endl;
    }
};

class Child : public Base{
    public:
    Child(){
        cout << "Constructor of Child class" << endl;

    }
    ~Child(){
        cout << "Destructor of Child class" << endl;

    }
};

int main(){
    Child* ch = new Child();
    Base* base = ch;

    delete base;
}

//we have used one parent class(Base) and a derieved class (child), inside which both constructors and destrucotrs are defined .
//Deleting an object of derieved class using a pointer of parent class shows an undefifed behaviour because it does not have virtual destructor. So, when we delete the object of child class, it invokes the base classe's destrctor, but the child classe's destructor is not invoked. As seen in logs, the destructor of child class is not invoked because the base class pointer can only remove the base class's destructor, which causes the problem of memory leak in the program. 