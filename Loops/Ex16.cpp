//Exercise 16 :
//write a program to print numbers from 1 to N.
//Input : 10.             Output : 1 2 3 4 5 6 7 8 9 10.
//PS: by using While
#include<iostream>
using namespace std;
int main(){
  cout << "Hello : \n";
  int num, i = 1;
  cout << "Enter a number to print it : \n";
  cin >> num;
  cout << "You Enterd : " << num << endl;
  while (i <= num)
  {
    cout << i << endl;
    i++;
  }
  
  
}