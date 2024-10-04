// Exercise 22:
// write a program to read numbers from user and sum them, keep reading until
// the user enters 99, then print the sum on screen.
//PS : Use Loop While

#include <iostream>
using namespace std;
int main(){
  int num[] = {};
  int i = 1, sum = 0;
  while(true){
    cout << "\nEnter a number : \n";
    cin >> num[i];
     sum = sum + num[i];
     if(num[i] == 99){
      break;
     }
    i++;
  }
  cout << "The sum is : "<< sum;
  
}