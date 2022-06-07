#include <iostream>
#include <iomanip>
//#include <cmath>

using namespace std;

/*
.Given  the radius in double , Find to area of a circle( print 5 non significant digits)
*/

int main()
{
double CircleRadius;
float  CircleAreaFraction;
int CircleAreaWhole;
float Pi=3.14159;
int RequiredSignificantDigits=5;

int NumberOfDigits;

cout << "Enter the Circle Radius:";
cin >> CircleRadius;
cout << "\n";

CircleAreaFraction=Pi*CircleRadius*CircleRadius;

cout << setprecision(RequiredSignificantDigits) << "The Area is: " << CircleAreaFraction;

return(0);

}
