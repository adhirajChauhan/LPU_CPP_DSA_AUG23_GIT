#include <iostream>
using namespace std;

//Pure virtual function -  A function for which we do not have an implementation. We do not write any functionality in it, we only declare this function

//Any class containing one or more pure virtual functions can not be used to define any object.

//These classes are also known as abstract classes.

// Classes derieved from abstract classes need to implement the pure virtual function.

//syntax = virtual <function_type> <function_name>() = 0;

class Shape{

    public:

    virtual float calculate_area() = 0;

};

class Square : public Shape{
    float a;
    public:

    Square(float l){
        a = l;
    }

    float calculate_area(){
        return a * a;
    }

};

class Circle : public Shape{
    float r;

    public:
    Circle(float x){
        r = x;
    }

    float calculate_area(){
        return 3.14 * r * r;
    }

    void display(){
        //body
    }
};


int main(){
    Shape* shape;
    Square s1(4);
    Circle c1(5);

    shape = &s1;
    int a1 = shape->calculate_area();

    shape = &c1;
    int a2 = shape->calculate_area();

    cout << "Area of square is : " <<  a1 <<endl; 
    cout << "Area of circle is : " <<  a2 <<endl; 

}