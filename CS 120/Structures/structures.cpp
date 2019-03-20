//Robert Pace IV

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student{
    int id;
    char name[30];
    int DOBYear;
    float GPA; 
};

int getChoice(int min, int max)
{
   int input;
   cin >> input;
   while (input < min || input > max)
   {  cout << "Invalid input. Enter an integer between "<<min<<" and "<<max<<": ";
      cin  >> input;
   }
   return input;
}

void displayMenu(){
	cout << "\n\nChoose a action to preform? \n"
	<< "======================================================= \n\n"
	<< setw(15)<<" " << "1 -- Enter the Students \n" 
	<< setw(15)<<" " << "2 -- See the Students \n"  
	<< setw(15)<<" " << "3 -- quit \n\n"
	<< "======================================================= \n\n";
}
int main(){
    int numbOfStu = 10;
    Student* myClass = new Student[numbOfStu];
    
    int choice;
	displayMenu();
    do{
        choice = getChoice(1, 3);
		if (choice == 1) {
            for(int i=0; i<numbOfStu; i++){
                cout<< "\n\n\n----Enter the info on Student "<<i+1<<"----"<<endl;
                cout << "Name: ";
                cin.ignore();
                cin.getline(myClass[i].name,30);
                cout << "ID: "; 
                cin.ignore();
                cin>>myClass[i].id;
                cin.ignore();
                cout << "DOBYear: "; 
                cin>>myClass[i].DOBYear;
                cout << "GPA: ";
                cin>>myClass[i].GPA;
         
            }
            cout<<"\n\n\n";
            displayMenu();
        }else if (choice == 2){    
            cout<< "\n\n\n====================================|Class of "<<numbOfStu<<" Students|==========================================\n";
            for(int i=0; i<numbOfStu; i++){
                cout<< "\n\n----Student "<<i+1<<"----"<<endl;
                cout << "ID: " <<myClass[i].id <<endl;
                cout << "Name: " <<myClass[i].name <<endl;
                cout << "DOBYear: " <<myClass[i].DOBYear <<endl;
                cout << "GPA: " <<myClass[i].GPA <<endl;
            }
            cout<< "\n\n\n=====================================================================================================\n\n\n";
            displayMenu();
         }else if (choice == 3){
        	cout << "exiting... ";
		}

	} while (choice != 3);

    delete[] myClass;
    return 0;
}