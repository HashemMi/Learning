#include <iostream>

using namespace std;

/*FIZZ BUZZ Test a range of numbers
if the number is d
    divisible by 3 print FIZZ
    divisible by 5 print BUZZ
    divisible by 3 AND 5 print FIZZBUZZ

shkrn
*/

int main()
{
    int RangeLeastValue;
    int RangeGreatestValue;
    int RangeSize;
    int RangeIndex;
    int By3Test;
    int By5Test;

    cout << "Enter the least number in the range to be tested:";
    cin >> RangeLeastValue;

    cout << "Enter the Greatest number in the range to be tested";
    cin >> RangeGreatestValue;


    RangeSize = ( RangeGreatestValue - RangeLeastValue ) + 1;

    cout << "Range Size : " <<RangeSize << endl;



    for ( RangeIndex=RangeLeastValue ; RangeIndex<=RangeGreatestValue ; RangeIndex++ )
    {

        By3Test = RangeIndex % 3;
        By5Test = RangeIndex % 5;


        if ( (By3Test == 0) && (By5Test == 0) )

            {
                cout << "FIZZBUZZ" << endl;

            }
            else if ( By3Test == 0 )
            {
                cout << "FIZZ" << endl;

            }
            else if ( By5Test == 0 )
            {
                cout << "BUZZ" << endl;

            }
            else
            {
                cout << RangeIndex << endl;

            }
        }

cout << endl << "Shkrn" << endl ;




return(0);

}
