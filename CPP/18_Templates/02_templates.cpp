#include <iostream>
using namespace std;

template <class T, class U, class V = char>
class A{
    T var1;
    U var2;
    V var3;

    public:
    A(T v1, U v2, V v3){
        var1 = v1;
        var2 = v2;
        var3 = v3;
    }

    void print(){

        cout << "var1 : " << var1 << endl;
        cout << "var2 : " << var2 << endl;
        cout << "var3 : " << var3 << endl;

    }
};

int main(){
    A<int,double> obj1(2,2.2,'a');
    // cout << "value : " << endl;
    // obj1.print() ;

    A<double, char,bool> obj2(3.3,'a',true);
    cout << "value : " << endl;
    obj2.print() ;
}