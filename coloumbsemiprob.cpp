#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double R, Q; // input
   double lambda0, Ex, Ey; // output
   const double c = pow(10, -6);  // coloumb value
   const double k = 9 * pow(10, 9); // coloumb law
   const double pi = 3.14159265359; // pi value


   // data from user
   cout << "R: ";
   cin >> R;
   cout << "Q: ";
   cin >> Q;

   // calculation
   lambda0 = (Q * c) / (2 * R);
   Ex = 0;
   Ey = -((k * lambda0 * pi) / (2 * R));

   // output
   cout << "lambda0: " << lambda0 << endl;
   cout << "Ex: " << Ex << endl;
   cout << "Ey: " << Ey << endl;


   return 0;
}