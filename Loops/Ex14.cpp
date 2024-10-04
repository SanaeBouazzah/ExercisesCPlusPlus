// Exercise 14 :
// Write a program in C++ to display a pattern like a right angle triangle with Alphabets.
// input number of rows: 10
// Output : 
// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF

#include <iostream>
using namespace std;

int main(){
  for (int i = 65; i <=70 ; i++)
  {
    for (int j = 65; j <= i; j++)
    {
      cout << char(j);
    }
    cout << endl;
  }
  
}