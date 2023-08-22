#include <iostream>
#include <climits>
using namespace std;

int getMin(int num[], int size){
    int min = INT_MAX;
    for(int i = 0; i < size; i++){

        if(num[i] < min){
            min =  num[i];
        }
    }
    return min;
}

//GetMax

int main(){

    int size;
    cin >> size;

    int arr[100];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Min is : " << getMin(arr,size) << endl;
}