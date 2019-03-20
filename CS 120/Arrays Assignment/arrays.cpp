// Robert Pace IV

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int minValue(int a[], int len) {
    int smallest = a[0];
    for (int i = 1; i < len; ++i) {
        if (a[i] < smallest) 
            smallest = a[i];
    }
    return smallest;
}

int maximum(int a[], int numberOfElements)
{
    int largest = a[0];
    for (int i = 1; i < numberOfElements; ++i) {
        if (a[i] > largest) 
            largest = a[i];
    }
    return largest;
}

int countOccurrences(int a[], int len, int k)
{
    int count=0;
    for (int i = 0; i < len; ++i) {
        if (a[i] == k) 
            count++;
    }
    return count;
}

bool isLucky(int a[], int len)
{
    int count=0;
    int numb;
    for (int i = 0; i < len; ++i) {
        if (a[i] <13 || a[i]>13){ 
            if(a[i]==7)
                count++;
                // cout << count<<endl;
        }else{
            numb = -1;
            break;
        }    
    }
    
    if(count >= 1 && numb!=-1)
        return true;
    else 
        return false;
}

void fillA2DArray(int a[][100], int row){
    srand(time(0));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < 100; ++j) {
            a[i][j] = (rand()%201 - 100);
            // cout << a[i][j]<< " ";
        }
        // cout<<endl;
    }
}

int countNegatives(int a[][100])
{
    int count;
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            if (a[i][j] < 0) 
                count++;
        }
    }
    return count;
}

bool isStrictlyIncreasing(int a[], int len)
{
    int count=0;
    
        for (int i = 0; i < len; ++i) {
            if (a[i+1]>a[i]) count++;
        }
// cout << count;
    if(count == len-1)
        return true;
    else 
        return false;
}

int main()
{
  int arr[9] = {-2,0,2,4,6,8,9,10,11}; 

  cout << "\n\n\n====================|1-D Array|===================="<< endl;
  cout <<"1-D Array: {";
    for(int val : arr){
        cout<< val<<", ";
    }
  cout<<"}"<<endl;
  int min = minValue(arr,9);
  cout << "Min is:" << min<<endl;
  int max =  maximum(arr,9);
  cout << "Max is:" << max<<endl;
  int count = countOccurrences(arr, 9, 5);
  cout << "count is:" << count<<endl;
  bool lucky =  isLucky(arr, 9);
  cout << "lucky is:";
  lucky == 1 ?
    cout << " True" <<endl : cout << " False"<<endl;
  bool isIncreasing =  isStrictlyIncreasing(arr, 9);
  cout << "In increasing order:";
  isIncreasing == 1 ? 
    cout << " Yes"<<endl : cout << " No"<<endl; 
  cout << "===================================================\n"<< endl;

  int arr2[100][100];
  fillA2DArray(arr2,100);
  //cout<<"\n\n\n\n"<<arr2[9][8]<<"\n\n\n\n";

  cout << "\n====================|2-D Array|===================="<< endl;
  cout <<"100X100 2-D Array\n";
  int numNegatives = countNegatives(arr2);
  cout << "There is "<< numNegatives <<" negative numbers in the 2D array."<<endl;
  cout << "===================================================\n\n\n"<< endl; 
 
}


