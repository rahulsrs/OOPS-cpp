#include <iostream>
using namespace std;

class Stack{
	private:
	int top=-1;
	int arr[20];	
	public:
	int size = 20;	
	
	void push(){
		if(top==size-1){
			cout << "Overflow";
			return;
		}
		int num;
		cout << "Enter the number you want to Insert ";
		cin >> num;
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
	
	
};


int main(){
	Stack obj;
	while(1){
		int choice;
		cout << "Enter your choice \n";
		cout << "1)Push\n2)Pop\n3)Display\n4)Exit\n";
		cin >> choice;
		switch(choice){
		
		case 1:
			obj.push();
			break;
		case 2:
			obj.pop();
			break;
		case 3:
			obj.display();
			break;
		case 4:
			exit(1);
			break; 
		default:
			cout << "Invalid input";
		
		} 
	}
}
