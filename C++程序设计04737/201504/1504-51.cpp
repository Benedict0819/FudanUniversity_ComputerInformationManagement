//#include "stdafx.h"
#include <iostream>
using namespace std;

class B; class A {
  public:
    A(int i) { a =i; }
    friend int F(A &f1, B &f2);
  private:
    int a;
};

class B {
  public:
    B(int i) { b=i; }
    friend int F(A &f1, B &f2);
  private:
    int b;
};

int F(A &f1, B &f2) { return (f1.a + f2.b) * (f1.a - f2.b); }

int main() {
  A n1(10);
  B n2(8);
  cout << F(n1, n2) << endl;
  return 0;
}

