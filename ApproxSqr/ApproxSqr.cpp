#include <iostream>

using namespace std;

/*
given a number, give its approximate square root(rounded down)
sqrt(35)=5
sqrt(40)=6
*/

int main()
{
    cout << "this should get a number from you and provide the approx root" ;

    int num = 0;
    int root = 0;
    int i=0;


    cout << "Enter a number to find the approx root of: ";
    cin >> num;


    while  (i*i <= num)
    {
        i++;
    }

    cout << "Square Root = " << i-1;

    return(0);

}
