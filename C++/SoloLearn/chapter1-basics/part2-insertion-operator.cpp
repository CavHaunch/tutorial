#include <iostream>
using namespace std;

int main()
{
  cout << "Hello" << " " << "world!";
  //Multiple insertion operators can be added after cout.
  //The cout operator does not insert a line break at the end of the output. 
  cout << endl;
  //The endl manipulator moves the subesquently printed text down to a new line
  cout << "My finger \nis on the button";
  //The new line character \n can be used as an alternative to endl.
  //The backslash (\) is called an escape character, and indicates a "special" character.
  return 0;
}
