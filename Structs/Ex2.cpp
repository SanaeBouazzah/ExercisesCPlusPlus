//Exercis 1 :
//write a program to ask the user to enter his/her:
//Age, DriverLicense. Then print "Hired" if his/her 
//age is grater than 21 and s/he has driver license 
//otherwise print "Rejected".
#include <iostream>
#include <string.h>
using namespace std;
struct stInfo
{
  int age;
  string DriverLicense;
};
stInfo ReadInfo(){
  stInfo info;
  cout << "\nEnter your age please : \n";
  cin >> info.age;
  cout << "\n Do you have a DriverLicense : (Yes Or No) \n";
  cin >> info.DriverLicense;
  return info;
}
bool IsAccepted(stInfo info){
  return (info.age >= 21 && info.DriverLicense == "yes");
}
void PrintInfo(stInfo info){
  if(IsAccepted(info)){
    cout << "You are : \" Hired \" ";
  }
  else{
    cout << "You are : \" Rejected \" ";
  }
}
int main(){
  for (int i = 0; i < 4; i++)
  {
    PrintInfo(ReadInfo());
  }
  
  return 0;
}