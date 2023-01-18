#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main() {
 int liczba3,a3=0,b3=1;
 cout << "podaj liczbe: ";
  cin >> liczba3; 
  for (int i = 1; i <= liczba3; i++)
  { 
    int c3=a3+b3; 
     cout << i<<" liczba ciagu: " <<c3<< "\n";
      a3=b3;
      b3=c3;
    }
    }
