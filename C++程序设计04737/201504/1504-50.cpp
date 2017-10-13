//#include "stdafx.h"
#include <iostream>
using namespace std;

class Sample {
  private:
    int x;
    static int y;
  public:
    Sample(int a);
    void print();
};

Sample::Sample(int a) {
  x = a;
  y++;
}

void Sample::print() {
  cout << "x=" << x << ", y=" << y << endl;
}

int Sample::y = 25;

int main() {
  Sample s1(5);
  Sample s2(10);
  s1.print();
  s2.print();
  return 0;
}

