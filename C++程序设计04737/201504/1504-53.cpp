//#include "stdafx.h"
#include <iostream>
using namespace std;


class Complex {
  private:
    double real, image;
  public:
    Complex() {}
    Complex(double a, double b) { real = a; image = b; }

    void setRI(double a, double b) { real = a ; image = b; }
    double getReal() { return real; }
    double getImage() { return image; }
    void print() {
      if(image > 0)
        cout << "复数:" << real << "+" << image << "i" << endl;
      if(image < 0)
        cout << "复数:" << real << "-" << image << "i" << endl;
    }
    friend Complex add(Complex, Complex); 
};



Complex add(Complex c1, Complex c2) {
  Complex c3;
  c3.real = c1.real + c2.real;
  c3.image = c1.image + c2.image;
  return c3;
}

int main() {
  Complex c1(19, 0.864), c2, c3;
  c2.setRI(90, 125.012);
  c3 = add(c1, c2);
  cout << "复数一:";c1.print();
  cout << "复数二:";c2.print();
  cout << "相加后:";c3.print();
  return 0;
}


