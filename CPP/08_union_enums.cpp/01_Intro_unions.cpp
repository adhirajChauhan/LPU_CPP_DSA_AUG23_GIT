#include <iostream>
using namespace std;


//Unions can only hold one member value at time

union car{
    char name[20];
    int price;
};

struct bike{
    char name[20];
    int price;
    int price2;

};

int main(){

    car car1;
    bike bike1;
    
    cout << sizeof(car1) << endl;
    cout << sizeof(bike1) << endl;

}
