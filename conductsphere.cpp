#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
   double c, qa, qc, q;
   double ic, iq, Q;
   double V, W;
   double const k = 9 * pow(10, 9);

   cout << "c= "; cin >> ic;
   cout << "qa= "; cin >> qa;
   cout << "qc= "; cin >> qc;
   cout << "q= "; cin >> iq;

   Q = (qa + qc) * pow(10, -9);
   c = ic * pow(10, -2);
   V = k * (Q / c);
   q = iq * pow(10, -9);
   W = q * V;

   cout << "V= " << V << endl;
   cout << "W= " << W << endl;

   return 0;
}
