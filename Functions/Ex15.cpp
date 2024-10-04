//Exercise 7:
//write a program to print all letters from A to Z.
//Output : A B C D.......Z.


#include<iostream>
using namespace std;
void func(){
  for (int i = 65; i <= 90; i++)
  {
    cout << char(i)<<" ";
  }
  
}
int main(){
  func();
}