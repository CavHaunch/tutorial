#include <iostream>
using namespace std;

int main()
{
  /*
  Switch statement general syntax:
  
  switch (expression) {
    case value1:
      statement(s);
      break;
    case value2:
      statement(s);
      break;
      ...
    case valueN:
      statement(s);
      break;
    default:
      statements(s);
    }
      
  The break statement's role is to terminate the switch statement.
  If a break statment is not met then the switch statement executes 
  all of the following cases, regardless of if their condition was 
  met or not. This beheiviour is called fall-through. Break statments 
  can also be used in loops.
  
  The default case executes when none of the other cases are determined 
  to be true. It must be at the end of the end of the switch statement.
  */

  int age = 42;
  if (age == 16) {
    cout <<"Too young";
  }
  if (age == 42) {
    cout << "Adult";
  }
  if (age == 70) {
    cout << "Senior";
  }
  
  //A switch statement would be more elegant solution in this scenario.
  
  switch (age) {
  case 16:
    cout <<"Too young";
    break;
  case 42:
    cout << "Adult";
    break;
  case 70:
    cout << "Senior";
    break;
  deafult:
    cout << "This is the default case";
}
  
  return 0;
}
