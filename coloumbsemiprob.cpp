#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
   double d1, d2, c, q1, q2, T;
   double q, ud1, ud2;
   double const k = 9 * pow(10, 9);

   cout << "d1"; cin >> d1;
   cout << "d2"; cin >> d2;
   cout << "c"; cin >> c;
   cout << "q1"; cin >> q1;
   cout << "q2"; cin >> q2;

   q = q1 + q2;
   ud1 = d1 / 2;
   ud2 = d2 / 2;
   q1 = (ud1 * q) / (ud1 + ud2);
   q2 = q - q1;
   T = (k * q1 * q2 * pow(10, -6)) / pow(c, 2);

   cout << "T" << T << endl;

   return 0;
}