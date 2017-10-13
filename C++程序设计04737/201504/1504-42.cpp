//#include "stdafx.h"
#include <iostream>
using namespace std;

class Test {
  int x, y;
  public:
  void fun(int i, int j) {
    x = j; y =j; 
  };

  void show() {
    std::cout << "x=" << x; 
    if(y)
      cout << ", y=" << y << endl;
    cout << endl;
  };
};

int main()
{ Test A;
  A.fun(1,1);
  A.show();
  A.fun(2,4);
  A.show();
  return 0;
}

