#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(1); //1
    pq.push(2); //2,1
    pq.push(3); //3,2,1
    pq.push(4); //4,3,2,1

    // cout << pq.size();

    while(!pq.empty()){
        int val = pq.top();
        cout << val << " ";
        pq.pop();
    }

}