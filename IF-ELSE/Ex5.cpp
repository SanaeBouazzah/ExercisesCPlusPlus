//write a program to ask the user to enter : Age, if age is between 18 and 45
//print "Valid Age" otherwise print "Invalid Age".
#include <iostream>
using namespace std;
int main(){
  int age;
  cout << "\nEnter ur age : \n";
  cin >> age;
  cout << "ur age is : "<< age << endl;
  cout << (age >= 18 && age <= 45 ? "Valid Age" : "Invalid Age");
}