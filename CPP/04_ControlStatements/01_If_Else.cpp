#include <iostream>
#include<string>
using namespace std;

int main(){

    // int a = 5;

    // if(condition){
    //     execute
    // }

    // if(a > 0){
    //     cout << "Number is positive " << endl;
    // }
    // else{
    //     cout << "Number is negative " << endl;

    // }


    //-------------------------------------------
    int num;
    cout << "Enter your marks : ";
    cin >> num;

    if(num < 0 || num > 100){
        cout << "Invalid input"<< endl;
    }

    else if(num <= 100 && num > 90){
        cout << "Your grade is A" << endl;
    }
    else if(num <= 90 && num > 80){
        cout << "Your grade is B" << endl;
    }
    else if(num <= 80 && num > 70){
        cout << "Your grade is C" << endl;
    }
    else if(num <= 70 && num > 60){
        cout << "Your grade is D" << endl;
    }
    else if(num <= 60 && num >= 50){
        cout << "Your grade is E" << endl;
    }
    else{
        cout << "Fail" << endl;
    }

}

