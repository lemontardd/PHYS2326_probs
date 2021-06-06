#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double b, lambda, a, q;
   const double c = pow(10, -6);  // coloumb value
   const double k = 9 * pow(10, 9); // coloumb law
   double Ex, Fx;

   // data from user
   cout << "b: ";
   cin >> b;
   cout << "lambda: ";
   cin >> lambda;
   cout << "a: ";
   cin >> a;
   cout << "q: ";
   cin >> q;

   // calculation
   Ex = k * abs(lambda) * (b / (a * (a + b)));
   Fx = q * c * Ex;

   // output
   cout << "Ex: " << Ex << endl;
   cout << "Fx: " << Fx << endl;

   return 0;
}