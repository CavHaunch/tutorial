#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  /*An array is used to store a collection of data, but 
  it may be useful to think of an array as a collection 
  of variables that are all of the same type.*/
  
  /*An array is used to store a collection of data, but 
  it may be useful to think of an array as a collection 
  of variables that are all of the same type.*/
  
  int a[5];
  //This declares an array of five integer values
  
  //You can initialize the array by specifying the values it holds
  int b[5] = {11, 45, 62, 70, 88};
  
  //To index into an array use the syntax a[n] to acces the nth element
  //The index of arrays in C++ starts at 0
  cout << b[2] << endl; // outputs 62
  
  //Populating and manipulating an array using a for loop
  double dT = 0.1, T = 5, t[(int)(T/dT)], sint[(int)(T/dT)];
  
  int i;
  double n;
  for(n=0,i=0; i<(sizeof(t)/sizeof(t[0]));i++,n++){
    t[i] = n*dT;
    sint[i] = sin(2*PI*t[i]);
  }
  
  cout << "First element of the array: " << sint[0] << endl;
  cout << "Final element of the array: " << sint[49] << endl; 
  
  return 0;
}
