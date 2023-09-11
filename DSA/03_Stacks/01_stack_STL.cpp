#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> s;

    //push 
    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();
    s.pop();
    s.pop();

    // cout << s.top() << endl;

    // cout << "Size : " << s.size() << endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
}