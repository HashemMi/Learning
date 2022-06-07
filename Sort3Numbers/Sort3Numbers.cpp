#include <iostream>

using namespace std;

/*
Given 3 numbers, print the smallest, middle and biggest
*/

int main()
{
int Numbers[3];
int SortingTemp;



cout << "This will sort any three numbers you enter";

cout << "\n" << "Enter the First Number:";
cin >> Numbers[0];

cout << "\n" << "Enter the Second Number:";
cin >> Numbers[1];

cout << "\n" << "Enter the Third Number:";
cin >> Numbers[2];


//Sorting "Algorithm"
    for (int i=0; i<3; i++)
    {
        for (int j=i; j<3; j++)
            {
            if (Numbers[i] > Numbers[j])
                {
                    SortingTemp = Numbers[i];
                    Numbers[i] = Numbers[j];
                    Numbers[j] = SortingTemp;
                }
            }

    }

    cout << Numbers[0] << Numbers[1] << Numbers[2] << "shkrn";

return(0);

}
