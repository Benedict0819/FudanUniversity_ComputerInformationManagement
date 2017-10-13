//#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T>
void f (T a[], int n) { 
  T t;
  for (int i=0; i<n/2; i++)
    t=a[i], a[i]=a[n-1-i], a[n-1-i]=t;
}

int main() { 
  int a[5] = { 10, 21, 34, 4, 50 };
  double d[6] = { 11.1, 10.1, 9.1, 8.1, 7.1, 6.1 };

  f(a, 5); f(d, 6);

  for (int i=0; i<5; i++)
    cout << a[i] << "   ";
  cout << endl;

  for (int i=0; i<6; i++)
    cout << d[i] << "   ";
  cout << endl;
  return 0;
}

// 50 4 34 21 10
/*
   n=5  a[5]={ 10, 21, 34, 4, 50 }
   i=0  t=10, a[0]=a[4]=50, a[4]=10        { 50, 21, 34, 4, 10 }
   i=1  t=21, a[1]=a[3]=4, a[3]=21         { 50, 4, 34, 21, 10 }
   i=2  t=34, a[2]=a[2], a[2]=34           { 50, 4, 34, 21, 10 }
 */

// 6.1  7.1  8.1  9.1  10.1 11.1
