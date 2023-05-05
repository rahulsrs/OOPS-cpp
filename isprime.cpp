#include <iostream>
using namespace std;

bool isprime(int x){
    if(x<0)
        return false;
    else if (x==0||x==1)
        return false;
    else{
        for(int i=2;i<x;i++){
            if(x%i==0)
                return false;
        }
        return true;
    }
}

int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    if(isprime(x))
    cout << "The given number is prime";
    else
    cout << "The given number is not prime";
    return 1;   
}