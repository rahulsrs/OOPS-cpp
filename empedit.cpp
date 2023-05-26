#include<iostream>
#include<string>
using namespace std;

class employee{
	public:
	int emp_num;
	string emp_name;
	float bsal;
	float da;
	float it;
	float netsal;
	float grossal;
	
	void print(){
	cout<<"Employee Number: "<<emp_num<<endl;
	cout<<"Employee Name: "<<emp_name<<endl;
	cout<<"Basic Salary: "<<bsal<<endl;
	cout<<"DA: "<<da<<endl;
	cout<<"IT: "<<it<<endl;
	cout<<"Net Salary: "<<netsal<<endl;
	cout<<"Gross Salary:" <<grossal<<endl;
	}
	
	float getnet(){
		return netsal;
	}
	
	void calc(){
	da = bsal * 0.52;
	grossal = bsal + da;
	it  = 0.3*grossal;
	netsal = bsal + da + it;
	}
	
	void data(){
	cout<<"Enter Employee number: ";
	cin >> emp_num;
	cout<<"Enter Employee name: ";
	cin >> emp_name;
	cout<<"Enter Basic Salary: ";
	cin >> bsal;
	
	
	}

};

int main(){

cout<<"Enter the number of employees ";
int n;
cin>>n;

employee arr[n];

for(int i=0;i<n;i++){
	cout<<"Enter the Details for Employee "<<i+1<<endl;
	arr[i].data();
}

for(int i=0;i<n;i++){
	cout<<"Employee "<<i+1<<endl;
	arr[i].calc();
	arr[i].print();
}

