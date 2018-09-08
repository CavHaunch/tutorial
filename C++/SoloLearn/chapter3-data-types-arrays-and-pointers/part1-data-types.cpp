#include <iostream>
using namespace std;

int main()
{
  /*The operating system allocates memory and selects what will 
  be stored in the reserved memory based on the variable's data type.*/
  
  /*Numeric Data Types:
  Generally come in two types, integer and floating point
  Integers (whole numbers), such as -7, 42.
  Floating point (decimal) numbers, such as 3.14, -42.67.*/
  
  /*float and double are typically 4 and 8 bytes each repectively.
  double is effectively a "long float". long double also exists which
  is typically 16 bytes.*/
  
  /*Strings and Characters:
  A string is composed of numbers, characters, or symbols. 
  String literals are placed in double quotation marks; 
  some examples are "Hello", "My name is David", and similar.
  The string header must be included to use this type.
  However it is already included in the iostream library 
  so if iostream has been included there is no neeed to
  include the string library.

  Characters are single letters or symbols, and must be 
  enclosed between single quotes, like 'a', 'b', etc.
  
  In C++, single quotation marks indicate a character; double 
  quotes create a string literal. While 'a' is a single a 
  character literal, "a" is a string literal. */
  
  /*Booleans:

  The bool data type returns just two possible values: true (1) 
  and false (0). Conditional expressions are an example of a use 
  case for the bool data type.*/
  
  /*The sizeof function can be used to find out the size of each data
  type of your compiler*/
  
  return 0;
}
