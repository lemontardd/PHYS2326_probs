#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double ab, r1a, r2a, r3a;
   const double c = pow(10, -6);  // coloumb value
   const double k = 9 * pow(10, 9); // coloumb law
   double Er1, Er2, Er3, Emax;

   // data from user
   cout << "a/b: ";
   cin >> ab;
   cout << "r1/a: ";
   cin >> r1a;
   cout << "r2/a: ";
   cin >> r2a;
   cout << "r3/a: ";
   cin >> r3a;

   // calculation
   Er1 = ((pow(r1a, 2) - 1) / (2 * r1a)) / ((pow(ab, 2) - 1) / (2 * ab));
   Er2 = ((pow(ab, 2) - 1) / (2 * r2a)) / ((pow(ab, 2) - 1) / (2 * ab));
   Er3 = 0;

   // output
   cout << "Er1/max: " << Er1 << endl;
   cout << "Er2/max: " << Er2 << endl;
   cout << "Er3/max: " << Er3 << endl;

   return 0;
}