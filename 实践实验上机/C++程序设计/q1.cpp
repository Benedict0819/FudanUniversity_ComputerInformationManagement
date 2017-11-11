#include <iostream>
using namespace std;

class Point {
  public:
    int x;
    Point(int a) { x=a; }
    int Getx(){ return x; }
    //cout<<Getx()<<endl;
};

int main() {
  Point A(76);
  cout<<A.x;
  cout<<A.Getx()<<endl;
  return 0;
}
