#include <iostream>
using namespace std;

//A constructor is a special type of member function that is called automatically when an object is created;

//constructor's name is same as the class name

// default constructor has no parameters, however input arguments are available for parametrized constructors and copy constructors.

class Student{
    public:
    string name;
    int age;
    string gender;

    //Default constructor
    Student(){
        cout << "Default constructor invoked" << endl;
    }

    Student(string myName, int myAge, string myGender){
        cout << "Parametrized constructor invoked" << endl;

        name = myName;
        age = myAge;
        gender = myGender;
    }

    void display(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl; 
        cout << "Gender : " << gender << endl; 

    }

};

int main (){

    // Student s1("Hello", 22, "M");
    // Student s2;
    // Student s3("Hi", 33, "F");

    // cout << s1.name << endl;
    // cout << s1.age << endl;
    // cout << s3.gender << endl;

    Student s1("Hello", 11, "M");
    s1.display();
}