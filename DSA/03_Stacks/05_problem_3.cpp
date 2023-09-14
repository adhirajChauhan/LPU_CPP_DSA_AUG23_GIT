#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int> &inputStack, int count, int size){

    if(inputStack.empty() || count == size/2){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    //recursive call
    deleteMiddle(inputStack, count+1, size);

    inputStack.push(num);

}

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    int size = s.size();

    cout << "Stack before deletion : ";

    stack<int> tempStack = s;

    while(!tempStack.empty()){
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    deleteMiddle(s,0,size);


    cout << "Stack after deletion : ";

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

}