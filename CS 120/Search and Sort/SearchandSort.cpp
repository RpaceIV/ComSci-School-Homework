#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//=================================================================================//
//----|Display Menu Method|----//
void displayMenu(){
	cout << "\n\nChoose a Search or Sort that you would like to preform? \n"
	<< "======================================================= \n\n"
	<< setw(15)<<" " << "1 -- Linear Search \n" 
	<< setw(15)<<" " << "2 -- Binary Search \n" 
	<< setw(15)<<" " << "3 -- Selection Sort \n"
    << setw(15)<<" " << "4 -- Bubble Sort \n" 
	<< setw(15)<<" " << "5 -- quit \n\n"
	<< "======================================================= \n\n";
}

//----|Get Chpice Method|----//
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

//----|Fill Array Method|----//
void fillArray(int a[]){
    srand((unsigned)time(NULL));
    for (int i = 0; i < 100; i++) {
            a[i] = (rand()%101);
             cout << a[i]<< " ";
        }
        cout<<endl;
}

//----|Is Strictly Increasing Method|----//
bool isStrictlyIncreasing(int a[], int len)
{
    int count=0;
        for (int i = 0; i < len; ++i) {
            if (a[i+1]>=a[i]) count++;
        }
// cout << count;
    if(count == len-1)
        return true;
    else 
        return false;
}

//----|Linear Search Method|----//
int linearSearch(int a[], int size, int searchVal){
    for(int i=0;i<size;i++){
        if (searchVal == a[i]){
            return i;
        }
    }
    return -1;
}

//----|Binary Search Method|----//
int binarySearch(int a[], int size, int searchVal){
    int low =0;
    int high = size - 1;
    int mid;

    while (low <= high){ 
        mid = (low + high)/2;
        if(searchVal == a[mid]){
            return mid;
        }else if(searchVal > a[mid]){
            low = mid+1;
        }else{
            high = mid -1;
        }
    }
    return -1;
}

//----|Selection Sort Method|----//
void selectionSort(int a[], int size){
    int smallest, smallestIndex;
    for(int i = 0; i < size; i++){
        smallest = a[i];
        smallestIndex = i;
        for(int m =i;m < size; m++){
            if(a[m] < smallest){
                smallest = a[m];
                smallestIndex = m;
            }    
        }
        swap(a[i], a[smallestIndex]);   
    }
}

//----|Bubble Sort Method|----//
void bubbleSort(int a[], int size){
    for(int i=0; i<size-1;i++){
        for(int j=i+1;j<size;j++){
            int temp;
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] =temp;
            }
        }
    }
}

//=================================================================================//

int main(){
    int arrLen = 100;
    int a[arrLen];
    cout<< "\n\n\n====================================|Starting Array of 100|==========================================\n";
    fillArray(a);
    cout<< "=====================================================================================================\n\n\n";

	int userVal;
    int choice;
	displayMenu();

	do{
		choice = getChoice(1, 5);
		if (choice == 1) {
			cout << "Enter a integer to search between 0 and 100: ";
            cin >> userVal;
            int result = linearSearch(a,arrLen,userVal);
            if(result >= 0)
                cout << "The number " << a[result] << 
                " was found at the element with index " << result << endl;
            else
                cout << "The number " << userVal << " was not found. " << endl;
            displayMenu();
		}

    	else if (choice == 2) {
            bool increasing = isStrictlyIncreasing(a,arrLen);
            if(increasing == 1){
                cout << "Enter a integer to search between 0 and 100: ";
                cin >> userVal;
                int result = binarySearch(a,arrLen,userVal);
                if(result >= 0)
                    cout << "The number " << a[result] << 
                    " was found at the element with index " << result << endl;
                else
                    cout << "The number " << userVal << " was not found. " << endl;
            }else{
                cout<<"The array is not sorted in asending order! "
                    "Please sort the array first."<<endl;    
            }
			displayMenu();
		}

    	else if (choice == 3) {
			selectionSort(a, arrLen);
            cout<< "\n\n\n=============================|Selection Sorted Array of 100|=======================================\n";
            for(int i=0; i<arrLen;i++){
                cout<< a[i] << " ";
            }
            cout<< "\n=====================================================================================================\n\n\n";
			displayMenu();
    	}
        
        else if (choice == 4){
        	bubbleSort(a, arrLen);
            cout<< "\n\n\n===============================|Bubble Sorted Array of 100|=======================================\n";
            for(int i=0; i<arrLen;i++){
                cout<< a[i] << " ";
            }
            cout<< "\n=====================================================================================================\n\n\n";
            displayMenu();
    	}
        
        else if (choice == 5){
        	cout << "exiting... ";
		}

	} while (choice != 5);
	return 0;
}