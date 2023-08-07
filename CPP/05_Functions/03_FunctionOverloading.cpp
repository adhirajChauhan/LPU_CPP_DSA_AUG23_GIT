#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a+b+c;
}

// float add(float a, float b){
//     return a + b;
// }

int main(){
    cout << add(2,2) << endl;
    // float y = add(2.2f,2.2f);
    int z = add(3,5,6);

    // cout << x << endl;
    // cout << y << endl;
    cout << z << endl;

}