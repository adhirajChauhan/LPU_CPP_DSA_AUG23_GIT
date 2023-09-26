#include <iostream>
using namespace std;

//muti - level inheritance - when one class inherits another class which further inherited by another class.

class Animal{
    public:
    void eat(){
        cout << "Animal is eating" << endl;
    }

    void sleep(){
        cout << "animal can sleep" << endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "dog is barking" << endl;
    }
};

class BabyDog : public Dog{
    public:
    void woof(){
        cout << "baby dog is woofing" << endl;
    }
};


int main(){

    BabyDog b1;

    b1.eat();

}