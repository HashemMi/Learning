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


    cout << "Enter a number to find the approx root of: ";
    cin >> num;

    /*Algo works as such:
    1-Starts with lowerEnd=0 upperEnd = num, then adds the numbers together and then Divides by two and sets it's integer as middle of the range.
    2-Squares the midRange number and compares it to the input number
        if higher
            midRange goes to replace upperEnd and again it is added to the lowerEnd and it's division by two becomes the mid range.
        if lower
            midRange goes to replace lowerEnd and it is added to the upperEnd and it's division by two becomes the mid range.
    */


    int lowerEnd = 0;
    int upperEnd = num;
    int midRange = (lowerEnd+upperEnd)/2;

    root = midRange * midRange;

    while  (root!=num)
    {
       cout << "LE= " << lowerEnd << "   MR= " << midRange << "   UE= " << upperEnd << endl;

       if(root>num)
       {
           upperEnd = midRange;
           midRange = (lowerEnd+upperEnd)/2;
       }
       else if(root<num)
       {
           lowerEnd = midRange;
           midRange = (lowerEnd+upperEnd)/2;
       }

       if (lowerEnd == midRange || midRange == upperEnd)
       {
           break;
       }

    root = midRange * midRange;
    }

    cout << "Square Root = " << midRange;

    return(0);

}
