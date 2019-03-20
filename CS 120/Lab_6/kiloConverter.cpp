// Lab 6 kiloConverter.cpp 
// This menu-driven program lets the user convert 
// pounds to kilograms and kilograms to pounds.
// Robert Pace IV

using namespace std;
#include <iostream>
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream> 

// Function prototypes
void displayMenu();
int getChoice(int, int);
double kilosToPounds();
double poundsToKilos();

/*****     main     *****/
int main()
{
    int choice;
	displayMenu();
	do{
		choice = getChoice(1, 3);
		if (choice == 1) {
			cout <<" kilograms = "<<kilosToPounds()<<" pounds."<<endl;
			displayMenu();
		}
    	else if (choice == 2) {
			cout << " pounds = " << poundsToKilos() <<" kilograms."<<endl;
			displayMenu();
		}
    	else if (choice == 3){
        	cout << "exiting... ";
		}
	} while (choice != 3); 
   return 0;
}
/*****     displayMenu     *****/
void displayMenu(){
	cout << "\n\nChoose a conversion that you would like to preform? \n"
	<< "======================================================= \n\n"
	<< setw(13)<<" " << "1. Convert kilograms to pounds \n" 
	<< setw(13)<<" " << "2. Convert pounds to kilograms \n" 
	<< setw(13)<<" " << "3. Quit \n\n"
	<< "======================================================= \n\n";
}
/*****     getChoice     *****/
int getChoice(int min, int max)
{
   int input; 
   // Get and validate the input
   cin >> input;
   while (input < min || input > max)
   {  cout << "Invalid input. Enter an integer between "<<min<<" and "<<max<<": ";
      cin  >> input;
   }
   return input;
}
/*****     kilosToPounds     *****/
double kilosToPounds(){
    double weightInK;
    cout<< "Weight to be converted in kilograms: ";
    cin>>weightInK;
    double conversion = (2.2*weightInK);
    cout << weightInK;
    return conversion;
}
/*****    poundsToKilos     *****/
double poundsToKilos(){
    double weightInP;
    cout<< "Weight to be converted in pounds: ";
    cin>>weightInP;
    double conversion = (weightInP/2.2);
    cout << weightInP;
    return conversion;
}