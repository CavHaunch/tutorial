#include <iostream>
using namespace std;

int main()
{
  int myVariable = 10;
  
  /*Creating a variable reserves a memory location,
  or a space in memory for storing values.
  The compiler requires that you provide a data type for each variable you declare.
  Integer, a built-in type, represents a whole number value*/
  
  cout << myVariable;
  //The value of a variable can be printed
  //The C++ programming language is case-sensitive, so myVariable and myvariable are two different identifiers.
  
  int a,b;
  //Multiple variables of the same type can be defined in one declaration, separating them with commas.
  
  int c = 5, d = 10;
  //Values can be assigned to multiple variables upon declaration
  
  int sum = c + d;
  //A value can be assigned to a variable upon declaration by operating on other variables
  
  cout << "The sum of a and b is: " << sum << endl;
  //Outputs 15
  //Multiple different types can be output in conjunction using onlu one cout
  
  b = 20;
  //Variables can be reasigned a calue after declartion
  //*NOTE* This does not change the value of sum
  
  return 0;
}
 
