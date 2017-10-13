//#include "stdafx.h"
#include <iostream>
using namespace std;

class f {
  private: float x,y;
  public: 
           void f1(float a, float b) { x=a; y=b; }
           float max() { return(x>y)? x:y; }
};

int main(){
f a;
a.f1(1.5, 3.8);
cout << a.max() << endl;
}
