//Robert Pace IV

#include <iostream>
using namespace std;

void exchange(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    cout<<"You swapped the numbers. "<<endl;
}

int main(){
    int numb1, numb2;
    cout<<"Pick two numbers that you would like to exchange."<<endl;
    cout<<"Enter the first number: ";
    cin>>numb1;
    cout<<"\nEnter the second number: ";
    cin>>numb2;
    exchange(&numb1,&numb2);





}