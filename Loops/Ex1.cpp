//Exercise 1 :
//write a program to print numbers from 1 to N.
//Input : 10.             Output : 1 2 3 4 5 6 7 8 9 10.
#include<iostream>
using namespace std;
int main(){
  cout << "Hello : \n";
  int num;
  cout << "Enter a number to print it : \n";
  cin >> num;
  cout << "You Enterd : " << num << endl;
  for (int i = 1; i <= num; i++)
  {
    cout << i << endl;
  }
  
}