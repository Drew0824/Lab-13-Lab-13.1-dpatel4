#include <iostream>
using namespace std;

int main() {
 int month = 1;
   float total = 0, rain;

   cout << "Enter the total rainfall for month " << month << endl;
   cout << "Enter -1 when you are finished" << endl;
   cin >> rain;

   while (rain != -1)
   {
      total = total + rain;
      month = month + 1;

      cout << "Enter the total rainfall in inches for month "
           << month << endl;
      cout << "Enter -1 when you are finished" << endl;
      cin >> rain;
   }

   if (month == 1)
      cout << "No data has been entered" << endl;
   else
      cout << "The total rainfall for the " << month-1
           << " months is "<< total << " inches." << endl;
}



// Does the program function correctly?

// The program functions correctly.


// What is the purpose of the rain variable?

// The purpose is to end the program if the user enters -1.

// What is the purpose of the month variable?

// The month variable is used to ask the user the total rainfall in inches for the months. It is used to represent the incehs of rain.

// What is the purpose of the total variable?

// The total variable is used to add up the total amount fo rain in inches in months. So if the user enters 20 inches in month one and 10 inches in month 2 the total of that would 20 +10 and the total variable is the formula for that.

// What happens if you enter –1 first?

// If you enter -1 it stops the loop and gives you the the total rainfall for the months in inches.

// What happens if you enter only values of 0 for one or more months?

// THe sum of those months gets added up correctly and it adds 0 for those months are were entered 0 and then it give you the total if all the months are 0 incehs of rain then the answer would be 0.

// Is there any numerical data that you should not enter? (Hint: rainfall can only be greater than or equal to zero.)

// You can't enter anthing below zero because if it doesn't rain then the answer is zero and if it rains then its a positve integer, never negative.