#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double q1, q2, q3, L;
   double f1x, f2x, f3x, f1y, f2y, f3y;

   // coloumb number and law
   const double ck = 9 * pow(10, 9) * pow(10, -12);

   // in degrees
   const double cos60 = 0.5;
   const double sin60 = 0.86602540378;

   // user inputs values
   cout << "q1: ";
   cin >> q1;
   cout << "q2: ";
   cin >> q2;
   cout << "q3: ";
   cin >> q3;
   cout << "L: ";
   cin >> L;

   // calculates f by x and y
   f1x = (((q1 * q3 * ck) / pow(L, 2)) * cos60) - ((q1 * q2 * ck) / pow(L, 2));
   f1y = (((q1 * q3 * ck) / pow(L, 2)) * sin60);
   f2x = ((q1 * q2 * ck) / pow(L, 2)) - (((q2 * q3 * ck) / pow(L, 2)) * cos60);
   f2y = (((q2 * q3 * ck) / pow(L, 2)) * sin60);
   f3x = (((q2 * q3 * ck) / pow(L, 2)) * cos60) - (((q1 * q3 * ck) / pow(L, 2)) * cos60);
   f3y = -(((q1 * q3 * ck) / pow(L, 2)) + ((q2 * q3 * ck) / pow(L, 2))) * sin60;

   // output
   cout << "f1x: " << f1x << endl;
   cout << "f1y: " << f1y << endl;
   cout << "f2x: " << f2x << endl;
   cout << "f2y: " << f2y << endl;
   cout << "f3x: " << f3x << endl;
   cout << "f3y: " << f3y << endl;

   return 0;
}
