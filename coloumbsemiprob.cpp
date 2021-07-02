#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
   double c1, c2, c3, v;
   double c4, c34, q34;

   cout << "c1="; cin >> c1;
   cout << "c2="; cin >> c2;
   cout << "c3="; cin >> c3;
   cout << "v="; cin >> v;

   c4 = (c3 * c2) / c1;
   c34 = (c3 * c4) / (c3 + c4);
   q34 = c34 * v;

   cout << "q4=" << q34 << endl;

   return 0;
}