// Lab 5 - summation.cpp
// This program displays a series of terms and computes its sum.
// Robert Pace IV                        
#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    char choice;
    do {
        int denom,           // Denominator of a particular term
            finalDenom = 64, // Denominator of the final term
            cNumb;
        double sum = 0.0; // Accumulator that adds up all terms in the series

        cout << "Robert Pace IV. \n";
        cout << "This program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n \n"
             << "What should n be in the final term (2 - 10)? ";
        cin >> cNumb;
        finalDenom = pow(2, cNumb);

        for (int i = 1; i < cNumb + 1; i++)
        {
            denom = pow(2, i);
            cout << "1/" << denom << ((denom == finalDenom) ? " = " : " + ");
            sum += (1.0 / denom);
        }
        cout << sum << endl;

        cout << "Compute another series (Y/N)";
        cin >> choice;
        cout << "\n\n";
    } while (tolower(choice) == 'y');

	return 0;
}
