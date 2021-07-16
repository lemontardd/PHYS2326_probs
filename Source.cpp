#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {
   double r1, r2, c1, c2, e, t;
   double ceq, req, teq;
   const double euler = 2.71828;
   double i1, q2;

   cout << "R1= "; cin >> r1;
   cout << "R2= "; cin >> r2;
   cout << "C1= "; cin >> c1;
   cout << "C2= "; cin >> c2;
   cout << "E= "; cin >> e;
   cout << "T= "; cin >> t;

   req = (r1 * r2) / (r1 + r2);
   ceq = c1 + c2;
   teq = req * ceq;
   i1 = (e / req) * pow(euler, (-t / teq)) * (r2 / (r2 + r1));
   q2 = c2 * e * (1 - pow(euler, (-t / teq)));

   cout << "I1= " << i1 << endl;
   cout << "Q2= " << q2;

   return 0;
}