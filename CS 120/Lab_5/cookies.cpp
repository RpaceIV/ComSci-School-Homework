// Lab 5 - cookies.cpp  
// This program finds the average number of boxes of cookies 
// sold by the children in a particular scout troop. 
// It illustrates the use of a counter, an accumulator, 
// and an end sentinel.
// Robert Pace IV                        
#include <iostream>
using namespace std;

int main()
{   
   int numBoxes,         // Number of boxes of cookies sold by one child
       totalBoxes=0,       // Accumulates total boxes sold by the entire troop
       numSeller=1;        // Counts the number of children selling cookies
       
   double averageBoxes;  // Average number of boxes sold per child
   
   cout << "             **** Cookie Sales Information **** \n\n";
   
   // Get the first input
   cout << "Enter number of boxes of cookies sold by seller " << numSeller
        << " (or -1 to quit): ";
   cin  >> numBoxes;
   

   while(numBoxes != -1)
   {
       while(numBoxes <-1){
        cout << "Enter the number of boxes sold by the next seller " << endl;
        cin>>numBoxes;
       }
    totalBoxes+=numBoxes;
    numSeller++;
    cout << "Enter the number of boxes sold by the next seller " << endl;
    cin>>numBoxes;
   }

   numSeller--;
   
   if (numSeller == 0)
      cout << "\nNo boxes were sold.\n";
   else
   {  
      averageBoxes = totalBoxes/(static_cast<double>(numSeller));

      cout << "The average number of boxes sold by the "<<
       numSeller << " sellers was " << averageBoxes << endl; 
   }
   
   return 0;
}
