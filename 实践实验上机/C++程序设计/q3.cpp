#include <iostream>
using namespace std;


template < class T>
T tmin(T x, T y) {
   return x<y?x:y ;
}


int main() {
  int a = 1, b = 1111;
  double c = 0.1111, d = 1.2222;
  long e = 11111, f = 22222;

  cout << tmin(a, b) << endl;
  cout << tmin(c, d) << endl;
  cout << tmin(e, f) << endl;

  return 0;
}

