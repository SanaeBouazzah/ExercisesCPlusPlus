//Exercis : 9
// Write a program in C++ to display a pattern like a right angle triangle using an asterisk.
// Input number of rows: 5
// *
// **
// ***
// ****
// *****
#include<iostream>
using namespace std;
int main(){
  cout << "\nPattern \n";
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  
}