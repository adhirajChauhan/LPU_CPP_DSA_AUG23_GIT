#include <iostream>
using namespace std;

class Students{
    int id;
    static int count;

    public:

    void setData(){
        cout << "Enter the id : " << endl;
        cin >> id;
        count++;
    }
    void getData(){
        cout << "The id of student is : " << id << " and the student count is " << count << endl;
    }

    static void getCount(){
        cout << "The value of count is : " << count << endl;
    }
};

int Students::count;

int main(){

    Students s1, s2, s3;

    s1.setData();
    s1.getData();
    Students::getCount();

    s2.setData();
    s2.getData();
    Students::getCount();

    s3.setData();
    s3.getData();
    Students::getCount();
}