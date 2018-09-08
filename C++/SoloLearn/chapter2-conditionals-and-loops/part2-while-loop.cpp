#include <iostream>
using namespace std;

int main()
{
   /*
   General while loop syntax:
   
   Initialise Loop Variable   
   while (LoopVariableCondition) {
      statement(s);
      LoopVariableModification
   }
   
   The loop iterates while the condition is true.
   At the point when the condition becomes false, program control is shifted to the line that immediately follows the loop.
   
   */
   
   //This example will print the numbers 0 to 4
   int i = 0;
   while(i<5){
      cout << i << ", ";
      i++;
   }
   
   //At the point when the condition becomes false, program control is shifted to the line that immediately follows the loop.
   
  return 0;
}
