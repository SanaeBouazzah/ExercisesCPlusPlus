// Exercise 6:
// write a program to ask the user to enter number and M and then print the number^M.
// Input : 2, 4.            Output: 16
//PS: Use Loop For
#include<iostream>
using namespace std;
int main(){
  int result = 1;
  int num, M;
  cout << "Hi : Enter a number : \n";
  cin >> num;
  cout << "Enter a power of number : \n";
  cin >> M;
  for(int i = 1; i <= M; i++){
     result = result * num;
  }
  cout << "result is : " << result;
  
}