#include <iostream>
#include <math.h>

using namespace std;

/*
given a number, give its approximate square root(rounded down)
sqrt(35)=5
sqrt(40)=6
*/

int main()
{
    cout << "this should get a number from you and provide the approx root" ;

    int numberToRoot = 0;
    int rootOfNumber = 0;


    cin >> numberToRoot;

    rootOfNumber = sqrt(numberToRoot);

    cout << "Square Root = " << rootOfNumber;

    return(0);

}
