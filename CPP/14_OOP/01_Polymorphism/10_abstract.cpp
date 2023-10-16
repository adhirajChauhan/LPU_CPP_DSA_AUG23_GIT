#include <iostream>
using namespace std;

//abstract class refers to a class containing atleast one pure virtual function, which can not be instantiated


//characteristics - 
// 1. abstract class must have at least one pure virtual function
//2. Abstract classes cannot be instantiated, but pointer and references of abstract class types can be created. We cannot create object of an abstract class.
//3. Classes that inherits the abstract class must implement all pure functions.

// class Shape{


    // public:
    // int shape_width;
    // int shape_height;

    // void width(int w){
    //     shape_width = w;
    // }

    // void height(int h){
    //     shape_height = h;
    // }

    // int perimeterOfSquare(int side){
    //     return 4 * side;
    // }

    // int PerimeterOfRectangle(int l, int b){
    //     return 2 * (l + b);
    // }

    //All the functions of sqaure and rectangle are clubbed in a single class



//};


class Shape{
    public:
    int shape_width;
    int shape_height;

    void width(int w){
        shape_width = w;
    }

    void height(int h){

        shape_height = h;
    }

    virtual int perimeter() = 0;
};

class Rectangle : public Shape{
    public:
    int perimeter(){
        return 2 * (shape_height+shape_width);
    }
};

class Square : public Shape{
    public:
    int perimeter(){
        return 4 * shape_width;
    }
};

int main(){
    Shape* s = new Rectangle();
    Rectangle r1;
    Square s1;

    r1.width(10);
    r1.height(5);
    s1.width(12);

    cout << r1.perimeter();
}