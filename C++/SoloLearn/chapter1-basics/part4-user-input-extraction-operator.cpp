#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Please enter a number \n";
  cin >> num;
  //To enable the user to input a value, cin is used in combination with the extraction operator (>>)
  //The variable must be defined before cin is used
  
  int a,b;
  cin >> a >> b;
  //As with cout, extractions on cin can be chained to request more than one input in a single statement:
  
  return 0;
}
