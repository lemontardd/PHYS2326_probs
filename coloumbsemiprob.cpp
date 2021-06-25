#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
   double q, a, c, b, greekl, pc, W;
   double iq, igreekl;
   double const k = 9 * pow(10, 9);
   double const e = 2.71828;

   cout << "q= "; cin >> iq;
   cout << "a= "; cin >> a;
   cout << "c: "; cin >> c;
   cout << "b: "; cin >> b;
   cout << "greekl: "; cin >> igreekl;

   q = iq * pow(10, -6);
   greekl = igreekl * (pow(10, -6) / pow(10, -2));
   pc = ((a * (b + c)) / (b * (a + c)));
   W = q * k * greekl * (log(pc) / log(e));

   cout << "W: " << W << endl;

   return 0;
}