#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
   double initiala;
   double a, qa, qb;
   double xx, yy, xy;
   double const k = 9 * pow(10, 9);
   double q1, q2, EA;

   cout << "a = ";
   cin >> initiala;
   cout << "qa = ";
   cin >> qa;
   cout << "qb = ";
   cin >> qb;

   a = initiala / 100;
   xx = (2 * (qa * (a / k)));
   yy = (sqrt(2) * (qb * (a / k)));
   xy = xx - yy;
   q1 = xy / (2 - sqrt(2));
   q2 = xx - (2 * q1);
   EA = (k / pow(a, 2)) * (abs(q1) - (abs(q2) / 4));

   cout << "q1 = " << q1 << endl;
   cout << "q2 = " << q2 << endl;
   cout << "EA = " << EA << endl;

   return 0;
}
