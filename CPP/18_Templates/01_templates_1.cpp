#include <iostream>
using namespace std;

//Templates allows us to write generic programs.
//Can be implemented in two ways - 1.Function Templates   2. Class Templates

/*
1.1Class Template
    Declaration

    template <class T>
    class className{
        T var;

        T print(){

        }
    };

1.2Defining class members outside class template

    template <class T>
    class className{
        T var;

        T print();

    };

    template <class T>
    T className<T> :: print(){

    }

*/

template <class T>
class Number{
    T num;

    public:
    Number(T n){
        num = n;
    }

    T getNum();

};

template <class T>
T Number<T> :: getNum(){
    return num;
}

int main(){
    
    Number<int> n1(2);
    Number<float> n2(2.2);
    Number<double> n3(7.77);

    cout << "int : " << n1.getNum() << endl;
    cout << "float : " << n2.getNum() << endl;
    cout << "double : " << n3.getNum() << endl;
}