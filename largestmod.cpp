#include <iostream>
using namespace std;

class num{

	private:
	int a=0;
	int b=0;
	int c=0;
	
	
	public:	
	void data(){
		cout<<"Enter the 1st Number ";
		cin>>a;
		cout<<"Enter the 2st Number ";
		cin>>b;
		cout<<"Enter the 3st Number ";
		cin>>c;
	
	}
	friend int largest(num);
	
	
};
	int largest(num a b c){
	return (a>b) ? ((a>c) ? a : c) : ((b>c)? b: c);
	}
 
int main(){

num myobj;
myobj.data();
cout<< "The largest number is "<<myobj.largest();

}
