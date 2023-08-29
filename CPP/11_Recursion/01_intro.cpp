#include <iostream>
using namespace std;

int factorial(int n){

    cout << n << endl;
    //base case
    if(n==0) return 1;

    // int smallProb = factorial(n-1);
    // int bigProblem = n * smallProb;

    // return bigProblem;

    return n * factorial(n-1);

    
}

int power(int n){
    //base case
    if(n==0) return 1;

    // int smallerProb = power(n-1);
    // int biggerProb = 2 * smallerProb;

    return 2 * power(n-1);
}

int main(){

    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;

    int ans2 = power(10);
    cout << ans2 << endl;

}