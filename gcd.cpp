#include <iostream>
using namespace std;

int gcd(int a, int b){
    int x = a%b;
    if(x == 0)
        return b;
    else
        return gcd(b,x);
}

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The GCD of the given numbers is " << gcd(num1,num2);
}