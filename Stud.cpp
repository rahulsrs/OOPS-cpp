#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Stud{
    private:
        string usn,name;
        float marks[3];
        int i;

    public:
        float avg=0;
        void read(){
       	    cout<<"Enter USN ";
            cin>>usn;
            cout<<"Enter your name ";
            cin>>name;
            for(i=0;i<3;i++){
                cout << "Enter the marks for subject "<< i+1<<endl;
                cin>>marks[i];
            }
        }

        void calc(){
            int min= marks[0];
            for(i=0;i<3;i++){
                if(min>marks[i]){
                    min = marks[i];
                }
               avg += marks[i];
            }
            avg = (avg-min)/2;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"USN: "<<usn<<endl;
            cout<<"Average marks: "<<avg<<endl;
            cout<<endl;
        }
};
    int main(){
        int n,topper,i=0;
        cout<<"Enter the number of students ";
        cin>>n;
        Stud *p = new Stud[n];
        for(i=0;i<n;i++){
            p[i].read();
            p[i].calc();
        }
        Stud *max=&p[0];
        for(int i=0;i<n;i++){
            if(max->avg<p[i].avg){
                max = &p[i];
            }
        }
        stack<int> ind;
        for(i=0;i<n;i++){
            if(max->avg==p[i].avg){
                ind.push(i);
            }
        }
        cout<<"The toppers are"<<endl;
        for(i=ind.size();i>0;i--){
            p[ind.top()].display();
            ind.pop();
        }
    }