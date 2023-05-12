//design a cpp program to print multiplication table

#include <iostream>
using namespace std;

int main(){
	cout << "Enter the number whose table is to be generated ";
	int n;
	cin >> n;
	for(int i=1;i<=10;i++){
		cout << n << "*" << i << "=" << n*i<<endl; 
	}
	return 1;
}
