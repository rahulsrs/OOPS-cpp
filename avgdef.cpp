#include <iostream>
using namespace std;

class Stud{
	public:
	int *marks;
	int n;
    Stud(){
    	cout<<"Enter the number of subjects ";
    	cin>>n;
        marks = new int[n];
        for(int i =0;i<n;i++){
            cout << "Enter marks for subject "<<i+1<<" ";
            cin>>marks[i];
        }
    }



};

int main(){
    Stud student;
    Stud *p = &student;
    float avg = 0;
    for(int i=0;i<p->n;i++){
        avg += p->marks[i];
    }
    avg /= p->n;
    cout<<"The avg is "<<avg;
    



}
