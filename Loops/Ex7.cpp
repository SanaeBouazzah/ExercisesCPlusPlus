//Exercise 7:
//write a program to print all letters from A to Z.
//Output : A B C D.......Z.


#include<iostream>
using namespace std;
int main(){
  cout << "Print All Letters From A to Z\n";
  for (int i = 65; i < 91; i++)
  {
    cout << char(i) << " - ";
  }
  
}