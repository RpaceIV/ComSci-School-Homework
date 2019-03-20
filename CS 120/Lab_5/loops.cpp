// Lab 5 - loops.cpp  Working with looping structures
// Robert Pace IV                       
#include <iostream>
using namespace std;

int main()
{   
   cout << "Robert Pace IV   \n";
   cout << "\nActivity 1 \n==========\n";
   int inputNum=1;
   while(inputNum != 0)
   {  
      cout << "Enter a number (or 0 to quit): ";
      cin  >> inputNum;
   }

   cout << "\nActivity 2 \n==========\n";
   char doAgain = 'y';
   do{
      cout << "Do you want to loop again? (y/n) ";
      cin  >> doAgain;
   } while(doAgain == 'Y' || doAgain == 'y');
 
   cout << "\nActivity 3 \n==========\n";
   for(int count = 0; count < 5; count++){
      cout << "Count is " << count << endl;
   }

   cout << "\nActivity 4 \n==========\n";
   int x = 5;
   while ( x-- > 0){         
      cout << x << " seconds to go. \n";
   }

   cout << "\nActivity 5 \n==========\n";
   for (int money = 1; money <= 3; money++)
   {  cout << '$';
      for (int asterisk = 1; asterisk <= 4; asterisk++)
         cout << '*';
      cout << endl;
   }
   cout << endl;
 
   return 0;
}
