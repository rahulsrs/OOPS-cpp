#include <iostream>
using namespace std;

class Stack{
	private:
	int top=-1;
	int arr[20];	
	public:
	int size = 20;	
	
	void push(int num){
		if(top==size-1){
			cout << "Overflow";
			return;
		}
		arr[++top]=num;
	}		
	
	int pop(){
		if(top==-1){
			cout <<"Underflow";
		}
		cout << "Popped " << arr[top] << "\n";
		return arr[top--];	
		}
	void display(){
		if(top==-1){
			cout << "The stack is empty\n";
			return;
		}
		cout << "Printing Values: ";
		for(int i=top;i>=0;i--){
			cout << arr[i] << " ";		
		}
		cout << "\n";
	}
	int peek(){
		cout <<"The Element at top is " << arr[top]<< "\n";
		return arr[top]; 
	
	}
	
	
};


int main(){
	Stack obj;
	obj.push(3);
	obj.push(4);
	obj.push(6);
	obj.peek();	
	obj.push(7);
	obj.push(8);
	obj.pop();
	obj.display();
}
