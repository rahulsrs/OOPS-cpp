#include <iostream>
using namespace std;

class Stud{
	public:
	int *marks;

    Stud(int n){
        marks = new int[n];
        for(int i =0;i<n;i++){
            cout << "Enter marks for subject "<<i+1<<" ";
            cin>>marks[i];
        }
    }



};

int main(){
    cout<<"Enter the number of subjects ";
    int n;
    cin>>n;
    Stud student(n);
    Stud *p = &student;
    float avg = 0;
    for(int i=0;i<n;i++){
        avg += p->marks[i];
    }
    avg /= n;
    cout<<"The avg is "<<avg;
    



}

