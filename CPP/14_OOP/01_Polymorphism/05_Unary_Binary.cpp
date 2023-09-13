#include <iostream>
using namespace std;

/*
*Unary operators :
    - operators which work on a single operand 
    - eg -> ++, --, !

*Binary operators :
    - operators which work on two operands 
    
*/

class UnaryOverload{
    int hr, min;

    public:
    void input(){

        cout << "Enter the time : " ;
        cin >> hr;
        cout << endl;
        cin >> min;
    }

    void operator ++(int){
        hr++;
        min++;
    }
    void operator --(int){
        hr--;
        min--;
    }
    void output(){
        cout << "Time is : " << hr << " hr " << min << " min ";
    }
};

int main(){

    UnaryOverload obj;
    obj.input();
    obj++;
    cout << "After increment : ";
    obj.output();

    obj--;
    obj--;

    cout << "After decrement : ";
    obj.output();


}