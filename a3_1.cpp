/* This program prompts user to type in the first character of square or triangle (s or t),
then it computes the area of a square or triangle. */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  char figureType;
  cout << "Enter the type of figure (s or t): " << endl;
  cin >> figureType;
  if (figureType == 115) {
    cout << "Enter the length of a side: " << endl;
    double sideValue;
    cin >> sideValue;
    double areaSquare = sideValue*sideValue;
    cout << fixed << setprecision(1) << "The area is " << areaSquare << endl;
  } else if (figureType == 116) {
    cout << "Enter the base: " << endl;
    double baseValue;
    cin >> baseValue;
    cout << "Enter the height: " << endl;
    double heightValue;
    cin >> heightValue;
    double areaTriangle = (1.0/2.0)*baseValue*heightValue;
    cout << fixed << setprecision(1) << "The area is " << areaTriangle << endl;
  } else {
  }
}
