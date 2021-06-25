#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
   double greekq, a, b, c, d, V;
   double igreekq, ia, ib;
   double const e0 = 8.85 * pow(10, -12);

   cout << "greekq= "; cin >> igreekq;
   cout << "a= "; cin >> ia;
   cout << "b= "; cin >> ib;

   greekq = igreekq * pow(10, -9);
   a = ia * pow(10, -2);
   b = ib * pow(10, -2);

   V = -(greekq / (2 * e0)) * (a - b);

   cout << "V: " << V << endl;

   return 0;
}