// Exercise 11 :
// Write a program in C++ to display a pattern like a right angle triangle using an asterisk.
// input number of rows: 10
// Output : 
// **********
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main(){
  for (int i = 10; i >=1 ; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  
}