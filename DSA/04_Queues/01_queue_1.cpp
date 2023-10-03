#include <iostream>
using namespace std;

class Queue{
    int *arr;
    int front;
    int back;
    int size;

    public:
    Queue(){
        arr = new int[size];
        front = -1;
        back = -1;
    }

    void push(int x){

        if(back == size - 1){
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1) front++;
    }

    void pop(){

        if(front == -1 || front > back){
            cout << "No elements in the queue" << endl;
            return;
        }

        front++;
    }
};

int main(){

}