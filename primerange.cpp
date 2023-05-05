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

int primerange(int a, int b){
    int count=0;
    for(int i=a;i<=b;i++){
        if(isprime(i))
            count++;
    }
    return count;
}

int main(){
    int a,b;
    cout << "Enter the boundaries of the range (with the smaller number first): ";
    cin >> a >> b;
    cout << "The number of primes in the range is: " << primerange(a,b);
    return 1;   
}