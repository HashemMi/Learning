#include <iostream>
#include <string>

using namespace std;

/*
Count the number of ZZs in a sentence

shkrn
*/

int main()
{
    cout << "This Should count the pair of zs in a sentence.";

    int zzCounter=0;
    string sentenceToTest="";

    cout << "Enter a sentece to test:";
    cin >> sentenceToTest;


//
    for (int i=1; i<sentenceToTest.length() ; i++)
    {
//
        if (sentenceToTest.at(i) == 'z' && sentenceToTest.at(i-1) == 'z')
        {
            zzCounter += 1;
        }

    }

    cout << zzCounter << " pairs is acounted for. \n shkrn";



return(0);

}
