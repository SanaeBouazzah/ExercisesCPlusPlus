//Exercise 7:
//write a program to print all letters from A to Z.
//Output : A B C D.......Z.
//PS: Use Loop While


#include<iostream>
using namespace std;
int main(){
  cout << "Print All Letters From A to Z\n\n";
  int x = 64;
  while (true)
  {
    if(x == 90){
      break;
    }
    x++;
    cout << char(x) <<" - ";
  }
  
  
}