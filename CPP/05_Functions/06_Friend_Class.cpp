#include <iostream>
using namespace std;

class Complex;
class Calculator{
    public:
    int SumReal(Complex , Complex );
    int SumImaginary(Complex, Complex);
};

class Complex{
    int a , b;

    public:
    void setNumber(int num1, int num2){
        a = num1;
        b = num2;
    }

    void print(){
        cout << "Your number is : "  << a << " + " << b << "i" << endl;
    }

    // friend int Calculator :: SumReal(Complex obj1, Complex obj2);
    // friend int Calculator :: SumImaginary(Complex, Complex);

    friend class Calculator;


};


int Calculator :: SumReal(Complex obj1, Complex obj2){
    return obj1.a + obj2.a;
}

int Calculator :: SumImaginary(Complex obj1, Complex obj2){
    return obj1.b + obj2.b;
}


int main(){

    Complex o1, o2;

    o1.setNumber(1,2);
    o2.setNumber(2,3);

    Calculator calc;
    int ans = calc.SumReal(o1,o2);
    cout << "Real sum is : " << ans << endl;

    int ans2 = calc.SumImaginary(o1,o2);
    cout << "Img sum : " << ans2 << endl;

}