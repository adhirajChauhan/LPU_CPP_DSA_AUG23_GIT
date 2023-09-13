#include <iostream>
using namespace std;

//Polymorphism -> Poly = many, Morph = forms
// same entity (function or operator) behaves differently in different scenarios.

//function overloading -> in function overloading, we can use two functions having same name if they have different parametes (either type or number of arguments)

//it's a COMPILE TIME POLYMORPHISM because the compiler knows which function to execute before the program is compiled.

/* 
    *Rules for operator overloading
    -at least one of the operand must be a user defined class object
    -we can only overlaod existing operators
    -some operators cannot be overlaoded 
        - ?:, ::, ., 

*/

int sum(int num1, int num2){
    return num1+ num2;
}

double sum(double num1, double num2){
    return num1 + num2;
}

int sum(int num1, int num2, int num3){
    return num1 + num2 + num3;
}

int main(){
    // int a = 5;
    // int b = 10;

    // int c = a + b;
    // cout << c;

    // string x = "Hello";
    // string y = "World";

    // string z = x + y;
    // cout << z;

//---------------------------------------


    cout << sum(2,3,3) << endl;
}

