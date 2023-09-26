#include <iostream>
using namespace std;

// public inheritance makes PUBLIC members of the base class PUBLIC in derieved class, and PROTECTED members of base class will remain PROTECTED in derieved class.

//protected inheritance  makes the PUBLIC and PROTECTED members of base class PROTECTED in derieved

//private inheritance  makes the PUBLIC and PROTECTED members of base class PRIVATE in derieved

//PRIVATE members of base class are inaccessible to the derieved class

class Base{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};


class PublicDerieved : public Base{
    //x is public
    //y is protected
    //z is not accessible
};

class ProtectedDerieved : protected Base{
    //x is protected
    //y is protected
    //z is not accessible
    
};

class PrivateDerieved : private Base{
    //x is private
    //y is private
    //z is not accessible
    
};

int main(){


}