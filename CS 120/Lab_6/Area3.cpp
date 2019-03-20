// Lab 6 Area3.cpp
// Robert Pace IV

using namespace std;
#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
#include<fstream> 

void displayMenu();
void findSquareArea();
void findCircleArea();
void findTriangleArea();

const double PI = 3.14159;

int main()
{
	int choice;
	displayMenu();
	do{
		cin >> choice;
		if (choice == 1) {
			findSquareArea();
			displayMenu();
		}
    	else if (choice == 2) {
			findCircleArea();
			displayMenu();
		}
    	else if (choice == 3) {
			findTriangleArea();
			displayMenu();
		}
    	else if (choice == 4){
        	cout << "exiting... ";
    	}else{
        	cout << "not an option. ";
			displayMenu();
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
void findSquareArea(){
	double length, height, area;
	cout << "enter the height of the square: " << endl;
	cin >> height;
	cout << "enter the length of the square: " << endl;
	cin >> length;
	area = length * height;
	cout << "Area = " << area << endl;
}
void findCircleArea(){
	double radius, area;
	cout << "enter the radius of the circle: " << endl;
	cin >> radius;
	area = PI * (radius * radius);
	cout << "Area = " << area << endl;
}
void findTriangleArea(){
	double length, height, area;
	cout << "enter the height of the right triangle: " << endl;
	cin >> height;
	cout << "enter the length of the right triangle: " << endl;
	cin >> length;
	area = (length * height) / 2;
	cout << "Area = " << area << endl;
}

