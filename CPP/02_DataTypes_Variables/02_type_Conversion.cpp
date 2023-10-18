#include <iostream>
using namespace std;

class Number{
    int n;
    public:

    Number(int n){
        this->n = n;
    }
    void print(){
        cout << n;
    }
    operator int(){
        return n;
    }
};

int main(){
    // float x = 2.345;
    // int y;
    // y = x;

    Number num = 10;
    // num.print();
    int a = num;
    cout << a;
//------------------------------------------------------------------------

    //1. Basic to class type conversion
    /*
    When we create object using the variables of primary data type then it is called as basic to class type conversion. Generally we use single argument constructor to perform type conversion from basic to class type.
    */
//------------------------------------------------------------------------
    //2. Class type to Basic type

    /*
    When we assign an object to a primitive data type variable, it is known as class type to basic conversion. To perform this type of conversion we have to define the casting operator function. 

    this casting operator function must be a member of the class.
    this function cannot have any return datatype.
    this function cannot take any parameter.
    operator datatype(){

    }
    */

//------------------------------------------------------------------------


}