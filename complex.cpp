#include <iostream>

class Complex
{

  public:int real;
  int imag;
    Complex (int r = 0, int i = 0)
  {
    real = r;
    imag = i;
  }
  static Complex add (int a, Complex s2)
  {
    Complex myobj;
    myobj.real = a + s2.real;
    myobj.imag = s2.imag;
    return myobj;
  }
  static Complex add (Complex s1, Complex s2)
  {
    Complex myobj;
    myobj.real = s1.real + s2.real;
    myobj.imag = s2.imag + s1.imag;
    return myobj;
  }
};

int main ()
{

  Complex myobj (1, 15);
  Complex myobj2 (15, 16);

  std::cout << Complex::add (myobj, myobj2).real << std::endl;


}
