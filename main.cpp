#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;
// The definition of recursion is the repeated application of a recursive procedure or definition.
//Recursive Function - contains a call to itself 

int factorialIR(int num)
{ 	
  int total = 1;

	 if (num == 0)
   {
      return 1;
   }
		   
		else
		{ 
      
		   return(num*factorialIR(num-1)); // recursive
	 }                    // call
}


int main() {
  int i;
  int t;
  cout << "Enter an interger: " << endl;
  i = validateInt(i);
  t = factorialIR(i);
  cout << "Factorial of the interger " << i << " is " << t << "." << endl;



}