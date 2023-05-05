#include <iostream>
using namespace std;


int fact(int n){
    int sum =1;
    for(int i=n;i>0;i--){
        sum = sum*i;
    }
    return sum;
}

int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    cout << "The Factorial of the number is " <<fact(x);
}