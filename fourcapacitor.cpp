#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
   double c1, c2, c3, c4, v;
   double c, v1, v4, q2, q3;
   double cs, cp, q, q4, vp, qp, vs, v3, q1, qs;
   const double k = 9 * pow(10, 9);
   const double f = 1 * pow(10, -6);

   cout << "input" << endl;
   cout << "c1="; cin >> c1;
   cout << "c2="; cin >> c2;
   cout << "c3="; cin >> c3;
   cout << "c4="; cin >> c4;
   cout << "v="; cin >> v;

   cs = ((c1 * c2) / (c2 + c1));
   cp = (cs + c3);
   c = ((cp * c4) / (cp + c4));
   q = c * v;
   q4 = q;
   qp = q;
   v4 = (q4 / c4);
   vp = (qp / cp);
   vs = vp;
   v3 = vp;
   q3 = c3 * v3;
   qs = cs * vs;
   q1 = qs;
   q2 = qs;
   v1 = q1 / c1;

   cout << "output" << endl;
   cout << "c=" << c << endl;
   cout << "v1=" << v1 << endl;
   cout << "v4=" << v4 << endl;
   cout << "q2=" << q2 << endl;
   cout << "q3=" << q3 << endl;

   return 0;
}
