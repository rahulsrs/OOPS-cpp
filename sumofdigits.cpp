#include <iostream>
#include <string>
using namespace std;

int digsum(int n){    //Approach 1: adds last digit while manipulating Int for each iteration
    int res=0;
    while(n>0){
        res += n%10;
        n /= 10;
    }
    return res;
}
int digsumalt(int n){    //Approach 2: iterates through string instance of the number and adds each digit
    int res=0;
    string nstr= to_string(n);
    for(int i=0;i<nstr.length();i++){
        res += stoi(nstr.substr(i,1));
    }
    return res;
}

int main(){
    int x;
    cout <<"Enter a number: ";
    cin >> x;
    cout << "The sum of its digits is " << digsum(x);
    return 1;
}