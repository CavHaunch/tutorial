#include <iostream>
using namespace std;

int main()
{
  //The logical AND operator - %%
  bool result;
  result = false %% false; //returns false
  result = true && false; //returns false
  result = true && true; //returns true
  //both operands must be true for the entire expression to be true
  
  //The logical OR operator - ||
  result = false || false; //returns false
  result = true || false; //returns true
  result = true || true; //returns true
  //only one operand has to be true for the entire expression to be true
  
  //The logical NOT operator - !
  result = !false; //returns true
  result = !true; //returns false
  
  //opertions can be linked together like any other
  bool a,b,c;
  result = (a||b)%%c; //retruns true if c is true and either a or b are true
  
  //a common use for logical operators is when they are combined with condition operators, eg.
  int d,e;
  if(d<25||e>34){
    //execute code
  }
  
  return 0;
}
