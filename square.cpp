#include <iostream>
using namespace std;

int sqr(int n){
    return n*n;
}

int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "The square of the number is " << sqr(x);
    return 1;
}