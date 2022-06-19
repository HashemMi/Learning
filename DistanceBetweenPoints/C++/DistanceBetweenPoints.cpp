#include <iostream>
#include <math.h>
using namespace std;

/*
3.Given 2 points x1,x2xy1,y2, print their distance
*/

int main()
{
cout << "This will get coordinates of two points and print the distance between them." << endl ;

 int Point1[2];
 int Point2[2];
 float Distance;

 cout << "Enter the X and Y coordinates for the first point :" << endl;
 cin >> Point1[0] >> Point1[1];

 cout << "Enter the X and Y coordinates for the second point :" << endl;
 cin >> Point2[0] >> Point2[1];

 Distance = sqrt( pow(Point1[0]-Point2[0],2) + pow(Point1[1]-Point2[1],2) );

 cout << "the Distance between :" << " (" << Point1[0] << "," << Point1[1] << ")" << "and "<< "(" << Point2[0] << "," << Point2[1] << ") is :  " << Distance;
return(0);

}
