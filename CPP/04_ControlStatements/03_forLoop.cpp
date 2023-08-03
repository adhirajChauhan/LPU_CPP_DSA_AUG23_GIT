#include <iostream>
using namespace std;

int main(){

    // int i;
    // for(i = 1; i <= 100; i+=2){
    //     cout << i << " ";
    // }

    // for(int i = 100; i >= 1; i-=2){
    //     cout << i << " ";

    // }


    //--------------------------------

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << i << " " << j << endl;
    //     }
    // }

    int row, col;

    cin >> row >> col;

    // for(int i = 1; i <= row; i++){
    //     for(int j = 1; j <= col; j++){
    //         cout << "*";
    //     } cout << endl;
    // }

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            if(i == 1 || i == row|| j == 1 || j == col){
                cout << "*" << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}