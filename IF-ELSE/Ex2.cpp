//write a program to ask the user to enter his/ her age and driver license,
// then print "Hired" if his/her age grater than 21 and s/he has a driver license,
//otherwise print "Rejected"
#include <iostream> 
#include <cmath> 
using namespace std; 
int main(){
  int age;
  bool DriverLicense;
  cout << "\nEnter ur age : \n";
  cin >> age;
  cout << "\nif u have a driver license print 1 if not print 0 : \n";
  cin >>  DriverLicense;
  cout << "\n********************\n";
  if(age >= 21 && DriverLicense == true) cout << "Hired.";
  else cout << "Rejected.";
  cout << "\n********************\n";
}