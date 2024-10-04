//Exercise 2 :
//write a program to print numbers from N to 1.
//Input : 10.             Output :10 9 8 7 6 5 4 3 2 1.
#include<iostream>
using namespace std;
int main(){
  cout << "Hello : \n";
  int num;
  cout << "Enter a number to print it : \n";
  cin >> num;
  cout << "You Enterd : " << num << endl;
  for (int i = num; i >= 1; i--)
  {
    cout << i << endl;
  }
  
}