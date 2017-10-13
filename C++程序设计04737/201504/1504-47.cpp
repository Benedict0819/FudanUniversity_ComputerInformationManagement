//#include "stdafx.h"
#include <iostream>
using namespace std;

class Test { 
  public: static int x;
          Test (int i=0) { x = i + x; }
          int Getnum() { return Test::x + 10; }
};

int Test::x=30;

int main() {
  Test test;
  cout << test.Getnum() << endl;
}
