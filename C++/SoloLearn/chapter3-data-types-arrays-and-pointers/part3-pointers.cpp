#include <iostream>

using namespace std;

int main() {
  
  /*Every variable is a memory location, which has its address 
  defined. That address can be accessed using the ampersand (&) 
  operator, which denotes an address in memory.*/
  
  int score = 5;
  cout << &score << endl;
  
  //The asterisk sign is used to declare a pointer
  int *ip;  // pointer to an integer
  double *dp;   // pointer to a double
  float *fp;  // pointer to a float
  char *ch;  // pointer to a character
  
  //This is how you assign the address of a variable to a pointer.
  int score = 5;
  int *scorePtr;
  scorePtr = &score;

  cout << scorePtr << endl;
  //Outputs "0x29fee8"
  //This hexidecimal number will most likely be different on
  //every run of the code
  
  //Assignment can be done in one line
  int var = 5;
  int * ptr = &var;
  
  /*The dereferece (*) operator is used to access the varaiable 
  stored in the location that the pointer points to*/
  
  
  return 0;
}

