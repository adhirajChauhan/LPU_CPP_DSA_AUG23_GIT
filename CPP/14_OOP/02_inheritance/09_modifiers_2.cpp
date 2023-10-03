#include <iostream>
using namespace std;

class Base{
    private:
    int private1 = 1;

    protected:
    int protected1 = 2;

    public:
    int public1 = 3;

    int getPrivateValue(){
        return private1;
    }
};

class ProtectedDerieved : protected Base{
    public:
    int getProtectedValue(){
        return protected1;
    }

    int getPublicValue(){
        return public1;
    }
    
};

int main(){

    ProtectedDerieved obj1;

    cout << "Public : " << obj1.getPublicValue() << endl;  
    // cout << "Private : " << obj1.getPrivateValue() << endl;
    // cout << "Protected : " << obj1.getProtectedValue() << endl;

}








