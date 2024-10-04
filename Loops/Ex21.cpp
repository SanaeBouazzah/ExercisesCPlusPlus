// Exercise 21:
// write a program to ask the user to enter number and M and then print the number^M.
// Input : 2, 4.            Output: 16
//PS : Use Loop While
#include<iostream>
using namespace std;
int main(){
  int num, M, i = 1, Power = 1;
  cout << "Hi : Enter a number : \n";
  cin >> num;
  cout << "Enter a power of number : \n";
  cin >> M;
  while (i <= M)
  {
   Power *= num;  
   i++;
  }
  cout << "Power of " << num << " is : " << Power;
  

  
}