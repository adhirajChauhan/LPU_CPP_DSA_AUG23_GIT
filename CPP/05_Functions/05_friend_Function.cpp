#include <iostream>
using namespace std;

// 1 + 2i
// 2 + 3i
//---------
// 3 + 5i

class Complex{
    int a, b;

    public:
    void setNumber(int num1, int num2){
        a = num1;
        b = num2;
    }

    void print(){
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }

    friend Complex sumComplex(Complex , Complex );

};

Complex sumComplex(Complex obj1, Complex obj2){

    Complex result;
    result.setNumber((obj1.a + obj2.a), (obj1.b+obj2.b));
    return result;
}

int main(){
    Complex c1, c2, sum;

    c1.setNumber(1,2);
    c1.print();
    c2.setNumber(2,3);
    c2.print();

    sum  = sumComplex(c1,c2);
    sum.print();
}



//Properties for friend function
//has access to private and protected members
//friend function cnnot be called by object of complex class
//cannot access members directly by their name, it would need object_name.member_name to access any member
//can be declared in private and public section of the class.