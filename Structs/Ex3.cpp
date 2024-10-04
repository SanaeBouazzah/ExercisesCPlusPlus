//Exercis 2 :
//write a program to ask the user to enter his/her:
//Age, DriverLicense. Then print "Hired" if his/her 
//age is grater than 21 and s/he has driver license 
//otherwise print "Rejected", but if has a recommandation
// print "Hired" without conditions.
#include <iostream>
#include <string.h>
using namespace std;
struct stInfo
{
  int age;
  string DriverLicense;
  string recommandation;
};
stInfo ReadInfo(){
  stInfo info;
  cout << "\nEnter ur age : \n";
  cin >> info.age;
  cout << "Do you have a DriverLicense : (Yes or No)\n";
  cin >> info.DriverLicense;
  cout << "Do you have a recommandation : (Yes or No)\n";
  cin >> info.recommandation;
  return info;
}
bool IsAccepted(stInfo info){
  if(info.recommandation == "yes"){
    return (info.recommandation == "yes");
  }else{
    return (info.age > 21 && info.DriverLicense == "yes");
  }
}
void PrintInfo(stInfo info){
  if(IsAccepted(info)){
    cout << "Hired.";
  }else{
    cout << "Rejected.";
  }
}
int main(){
  for (int i = 0; i < 5; i++)
  {
    PrintInfo(ReadInfo());
  }
  
  return 0;
}