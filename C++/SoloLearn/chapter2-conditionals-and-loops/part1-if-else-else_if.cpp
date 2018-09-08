#include <iostream>
using namespace std;

int main()
{
  /*General if statement syntax:
  
  if(FirstCondition) {
    statement to execute if FirstCondition is true
  }
  else if(SecondCondition) {
    statement to execute if SecondCondition is true
  }
  else{
    statement to execute if all conditions are false
  }
  
  The else statament can be omitted if it is not needed so no code executes if the condition is false */
  
  if(true) {
    cout << "This statement will execute" << endl;
  }
  else if(false || true) {
    cout << "This statement will NOT execute" << endl;
  }    
  else {
    cout << "This statement will NOT execute" << endl;
  }  
  
  
  if(false) {
    cout << "This statement will NOT execute" << endl;
  }
  else if(true) {
    cout << "This statement will execute" << endl;
  }
  else {
    cout << "This statement will NOT execute" << endl;
  }
  
  
  if(1>0){
    cout << "This statment is executed" << endl;
  }
  
  if(1<0){
    cout << "This code is skipped and nothing within this if statement is executed" << endl;
  } 
    
  return 0;
}
