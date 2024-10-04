// Exercise 3:
//write a program to ask the user to enter his/ her age and driver license,
// then print "Hired" if his/her age grater than 21 and s/he has a driver license,
//otherwise print "Rejected"
#include <iostream>
using namespace std;
void ReadInfo(int age, string driverlicense){
  cout << "Enter ur age please : \n";
  cin >> age;
  cout << "Do you have a driver license (yes/no): \n";
  cin >> driverlicense;
}
void PrintInfo(int age, string driverlicense){
  cout << "ur age is : " << age <<endl;
  cout << "your status : " << driverlicense<<endl;
}
void OperationInfo(int age, string driverlicense){
  if(age >= 21 && driverlicense == "yes"){
    cout << "Hired.";
  }
  else {
    cout << "Rejected.";
  }
}

int main(){
  int age;
  string driverlicense;
  ReadInfo(age, driverlicense);
  PrintInfo(age, driverlicense);
  OperationInfo(age, driverlicense);
}