#include <iostream>
#include<iomanip>
#include "Linkedlist.h"
#include"Linkedlist.cpp"
#include "Node.h"


using namespace std;





int main()
{
	int months=12;  // The number of months
      
   // LinkedList to hold the rainfall data.
   Linkedlist<double> rainFall;
   // Get the rainfall for each month.
   for (int month = 0; month < months; month++)
   {
      double rainAmount;

      // Get this month's rainfall.
      cout << "Enter the rainfall (in inches) for month #";
      cout << (month + 1) << ": ";
      cin >> rainAmount;
	        
      // Validate the value entered.
      while (rainAmount < 0)
      {  
         cout << "Rainfall must be 0 or more.\n"
              << "Please re-enter: ";
         cin  >> rainAmount;
      }

	  // Append the rain amount to the list.
	  rainFall.append(rainAmount);
   }
   
   // Set the numeric output formatting.
   cout << fixed << showpoint << setprecision(2) << endl;
   
   // Display the total rainfall.
   cout << "The total rainfall for the period is ";
   cout << rainFall.total() << " inches." << endl;
   
   // Display the average rainfall.
   cout << "The average rainfall for the period is ";
   cout << rainFall.average() << " inches." << endl;

   // Display the largest amount of rainfall.
   double max = rainFall.maximum();
   cout << "The largest amount of rainfall was ";
   cout << max << " inches in month ";
   cout << (rainFall.search(max) + 1) 
	    << "." << endl;

   // Display the smallest amount of rainfall.
   double min = rainFall.minimum();
   cout << "The smallest amount of rainfall was ";
   cout << min << " inches in month ";
   cout << (rainFall.search(min) + 1) 
	    << "." << endl << endl;

   return 0;
}
