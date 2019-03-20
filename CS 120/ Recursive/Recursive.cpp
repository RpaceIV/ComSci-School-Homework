//Robert Pace IV
using namespace std;

#include<iostream>

int recursiveSum(int[],int);

int main(){
    int numofE = 9;
    int arr[numofE];
    cout<< "Enter a list of "<< numofE<<" elements.\n\n\n";
    for (int i=0;i<numofE;i++){
        cout<<"Enter element "<<i<<endl;
        cin>>arr[i];
    } 
    int sum = recursiveSum(arr, numofE);
    cout<<"\n\n\nThe sum is: "<<sum<<endl;
    return 0;
}

int recursiveSum(int a[], int len){
    int sum;
    if (len == 0)
        return 0;
    else
        return  a[len-1]+recursiveSum( a,len-1);
}