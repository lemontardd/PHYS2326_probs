#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   double C, x, y, z;
   double Ex, Ey, Ez, E;

   cout << "C = ";
   cin >> C;
   cout << "x = ";
   cin >> x;
   cout << "y = ";
   cin >> y;
   cout << "z = ";
   cin >> z;

   Ex = - C * ((3 * pow(x, 2)) - (4 * x * y) + (3 * pow(z, 2)));
   Ey = - C * ((-2 * pow(x, 2)) - (4 * y * z));
   Ez = - C * ((6 * x * z) - (2 * pow(y, 2)));
   E = sqrt(pow(Ex, 2) + pow(Ey, 2) + pow(Ez, 2));

   cout << "Ex = " << Ex << endl;
   cout << "Ey = " << Ey << endl;
   cout << "Ez = " << Ez << endl;
   cout << "E = " << E << endl;

   return 0;
}