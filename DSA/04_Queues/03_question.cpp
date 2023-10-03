#include <iostream>
#include <queue>
#include <stack>
using namespace std;

//take out element from the queue 1 by 1 and put them in stack
//take out element from the stack 1 by 1 and put them in queue

queue<int> rev(queue<int> q){
    stack<int> s;

    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

    return q;
}

queue<int> kRev(queue<int> q, int k){
    stack<int> s;

    for(int i = 0; i < k; i++){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

    int t = q.size() - k;

    while(t--){
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

int main(){

}