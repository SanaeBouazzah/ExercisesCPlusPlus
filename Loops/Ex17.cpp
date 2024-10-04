//Exercise 17 :
//write a program to print numbers from N to 1.
//Input : 10.             Output :10 9 8 7 6 5 4 3 2 1.
//PS: using loop While
#include<iostream>
using namespace std;
int main(){
  cout << "Hello : \n";
  int num;
  cout << "Enter a number to print it : \n";
  cin >> num;
  int i = num;
  cout << "You Enterd : " << num << endl;
  while (i >= 1)
  {
    cout << i << endl;
    i--;
  }
  
  
}