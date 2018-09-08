//This example reads user input of two numbers, sums the numbers and then prints the sum

#include <iostream>
using namespace std;

int main() 
{
  int a, b;
  int sum;
  cout << "Enter a number \n";
  cin >> a;
  cout << "Enter another number \n";
  cin >> b;
  sum = a + b;
  cout << "Sum is: " << sum << endl;

  return 0;
}
