//write a program to ask the user to enter : Age, if age is between 18 and 45
//print "Valid Age" otherwise print "Invalid Age".
#include <iostream>
using namespace std;
void ReadAge(int &age){
  cout << "Enter ur age : \n";
  cin >> age;
}
int PrintAge(int age){
  if(age >= 18 && age <= 45) cout << "Valid Age.";
  else cout << "Invalid Age.";
  return age;
}
int main(){
  int age;
  ReadAge(age);
  PrintAge(age);
}