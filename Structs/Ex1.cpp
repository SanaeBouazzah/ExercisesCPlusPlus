// Exercise 1 : 
// Write a program to ask the user to enter : FirstName,
// LastName and then print full name on screen. Ex : Doe
                                                 //  John
// Output : Doe John.
#include<iostream>
using namespace std;
struct stinfo
{
  string FirstName;
  string LastName;
};
stinfo ReadName(){
  stinfo info;
  cout << "\nEnter FirstName : \n";
  cin >> info.FirstName;
  cout << "Enter ur LastName : \n";
  cin >> info.LastName;
  return info;
}
string GetFullName(stinfo info){
  string FullName;
  FullName = info.FirstName + " " + info.LastName;
  return FullName;
}
void PrintName(string FullName){
  cout << "\nFullName : " << FullName;
}

int main(){
  PrintName(GetFullName(ReadName()));
  return 0;
}