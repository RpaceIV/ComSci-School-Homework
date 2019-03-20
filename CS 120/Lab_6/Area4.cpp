// Lab 6 Area4.cpp
// Robert Pace IV

using namespace std;
#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
#include<fstream> 

void displayMenu();
double findSquareArea();
double findCircleArea();
double findTriangleArea();
int getChoice(int,int);

const double PI = 3.14159;

int main()
{
	int choice;
	displayMenu();
	do{
		choice = getChoice(1, 4);
		if (choice == 1) {
			cout << "Area = " << findSquareArea() << endl;
			displayMenu();
		}
    	else if (choice == 2) {
			cout << "Area = " << findCircleArea() << endl;
			displayMenu();
		}
    	else if (choice == 3) {
			cout << "Area = " << findTriangleArea() << endl;
			displayMenu();
		}
    	else if (choice == 4){
        	cout << "exiting... ";
		}
	} while (choice != 4);
	return 0;
}
void displayMenu(){
	cout << "\n\nChoose a shape that you would like to find the area of? \n"
	<< "======================================================= \n\n"
	<< setw(15)<<" " << "1 -- square \n" 
	<< setw(15)<<" " << "2 -- circle \n" 
	<< setw(15)<<" " << "3 -- right triangle \n" 
	<< setw(15)<<" " << "4 -- quit \n\n"
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
double findSquareArea(){
	double length, height, area;
	cout << "enter the height of the square: " << endl;
	cin >> height;
	cout << "enter the length of the square: " << endl;
	cin >> length;
	area = length * height;
	return area;
}
double findCircleArea(){
	double radius, area;
	cout << "enter the radius of the circle: " << endl;
	cin >> radius;
	area = PI * (radius * radius);
	return area;
}
double findTriangleArea(){
	double length, height, area;
	cout << "enter the height of the right triangle: " << endl;
	cin >> height;
	cout << "enter the length of the right triangle: " << endl;
	cin >> length;
	area = (length * height) / 2;
	return area;
}
