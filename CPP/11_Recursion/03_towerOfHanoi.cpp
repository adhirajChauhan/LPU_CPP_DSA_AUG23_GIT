#include <iostream>
using namespace std;

/*
    Tower of hanoi

    - there are 3 towers - Source, Auxiliary, Destination
    - Source tower contins a set of disks stacked, with the largest at the bottom and the smallest top.
    - the objective is to transfer the entire disks from Source to Destination tower maintaining the same order of the disks, using auxiliary tower.

    Rules 
    - only one disk can be transfered at a time
    - never a larger disk is placed on a smaller disk during the transfer.

*/

void towerOfHanoi(int n, char src, char aux, char dest){
    if(n==1){
        cout << "Move disk - " << n << " from " << src << " to " << dest << endl;
        return;
    }

    towerOfHanoi(n-1,src,dest,aux);
    cout << "Move disk - " << n << " from " << src << " to " << dest << endl;
    towerOfHanoi(n-1,aux,src,dest);

}

int main(){

    int n;
    cout << "Enter the number of disks : ";
    cin >> n;

    towerOfHanoi(n,'A', 'B' , 'C');

}