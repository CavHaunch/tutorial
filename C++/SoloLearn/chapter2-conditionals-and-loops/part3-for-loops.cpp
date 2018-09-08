#include <iostream>
using namespace std;

int main()
{
   /*
   General for loop syntax:
   
      
   for (InitialiseLoopVariable;LoopVariableCondition;LoopVariableModification) {
      statement(s);
   }
   
   The loop iterates while the condition is true.
   At the point when the condition becomes false, program control is shifted to the line that immediately follows the loop.
   
   */
   
   //This example will print the numbers 0 to 4 (exactly the same functionality as the for loop example)
   
   for(int i=0;i<5;i++){
      cout << i << ", ";
   }
   
   //All for loops can be converted into while loops and vice versa
   //For loops are generally preferred due to compactness and readability
   
  return 0;
}
