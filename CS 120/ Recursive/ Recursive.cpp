//Robert Pace IV
using namespace std;

#include<iostream>

int recursiveSum(int,int);

int main(){
    int numofE= 9;
    cout<< "Enter an array of numbers: "; 
    int arr[numofE] = {-2,0,2,4,6,8,9,10,11}; 

    int sum = recursiveSum(arr, numofE);
    cout<<"The sum is: "<<sum;
    return 0;
}

int recursiveSum(int a[], int len){
    int sum;
    if (len == 0)
        return 0;
    else
        return  a[len-1]+recursiveSum( a,len-1);
}