#include <iostream>
//The <iostream> header defines the standard stream objects that input and output data
using namespace std;

int main()
{
  cout << "Hello world!";
  //The insertion operator  << is used to insert the data that comes after it into the stream that comes before it
  return 0;
  //Returning a non-zero value (usually of 1) signals abnormal termination.
}

//If the return statement is left off, the C++ compiler implicitly inserts "return 0;" to the end of the main() function.
