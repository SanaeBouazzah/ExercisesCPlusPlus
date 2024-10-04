//Exercise 1 :
//Write a program to ask the user to enter his/her name and print it 
//on screen.

#include <iostream> 
using namespace std; 

void func(string name){
  cout << "Enter ur name : " << endl;
  cin >> name;
  cout << "Hello : " << name << endl;
}

int main() 
{
  string name;
  func(name);
}