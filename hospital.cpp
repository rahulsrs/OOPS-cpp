#include <iostream>
#include <string>
using namespace std;


class Date
{
public:
  int d;
  int m;
  int y;

};

class Hospital
{
  string name;
  Date adm;
  Date dis;
public:
  int age;
  void read ()
  {
    cout << "Enter The name of the patient ";
    cin >> name;
    cout << "Enter age ";
    cin >> age;
    cout << "Enter date of admission ";
    cin >> adm.d >> adm.m >> adm.y;
    cout << "Enter date of discharge ";
    cin >> dis.d >> dis.m >> dis.y;
  }
  void display ()
  {
    cout << name << endl;
    cout << age << endl;
    cout << adm.d << '/' << adm.m << '/' << adm.y << '/' << endl;
    cout << dis.d << '/' << dis.m << '/' << dis.y << '/' << endl;
  }
};

class pediatric:public Hospital
{
  string vaccine;
public:
  void getdata ()
  {
    read ();
    cout << "Enter name of vaccine";
    cin >> vaccine;
  }
  void peddisplay()
  {
    display ();
    if (this->age < 12)
      {
	cout << "Administered vaccine " << vaccine << " to patient" << endl;

      }
    else
      {
	cout << "patient isn't a pediatric patient" << endl;

      }
  }

};

int main ()
{
  Hospital obj[10];
  cout << "Enter number of patients ";
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cout<< "Enter details for patient "<< i+1<<endl;
      obj[i].read ();
    }
  cout << "Displaying the Database"<<endl;

  for (int i = 0; i < n; i++)
    {
      obj[i].display ();
      cout << endl;
    }
  pediatric obj1[10];
  cout << "Enter the number of pediatric patients";
  int n2;
  cin >> n2;
  for (int i = 0; i < n2; i++)
    {
      cout<< "Enter details for patient "<< i+1<<endl;
      obj1[i].getdata ();
    }
  cout << "Displaying database"<<endl;
  for (int i = 0; i < n2; i++)
    {
      obj1[i].peddisplay();
      cout << endl;


    }
}

