#include <iostream>
using namespace std;

struct Students{
    string name;
    int rollNo;
    float marks;

    void abc(){

    }
};

int main(){
    Students studen1;
    Students student2;
    
    studen1.name = "Shreya";
    studen1.marks = 82.5;
    studen1.rollNo = 11111;
    student2.name = "Alan";
    student2.marks = 81.5;
    student2.rollNo = 22222;


    cout << studen1.marks << endl;
    cout << student2.rollNo << endl;

}