#include <iostream>
using namespace std;

enum season{ 
    summer = 10, 
    winter = 20, 
    autumn = 33, 
    spring = 66
};

int main(){
    season s1;
    s1 = spring;
    cout << s1 << endl;
}