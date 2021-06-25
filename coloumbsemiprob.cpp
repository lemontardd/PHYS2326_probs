#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
   double q, m, L;
   double fq, fm, fL;
   double E, theta, v;
   double const pi = 3.14159265;

   cout << "q: ";
   cin >> fq;
   cout << "m: ";
   cin >> fm;
   cout << "L: ";
   cin >> fL;
   cout << "E: ";
   cin >> E;
   cout << "theta: ";
   cin >> theta;

   q = fq * pow(10, -6);
   m = fm * pow(10, -3);
   L = fL / 100;
   v = sqrt((2 * q * E * L * (1 - cos(theta * pi / 180))) / m);

   cout << "v: " << v << endl;

   return 0;
}