//write a program to read the ATM Pin code from the user
// then check if Pin code = 1234, then show the balance to 
// user the balance is 7500. 
//Example : 1234, 5151            Output : ur balance is :7500, wrongPin
#include<iostream>
using namespace std;
void ReadPin(int &pincode){
  cout << "\nEnter Pin code : \n";
  cin >> pincode;
}
int CheckPin(int pincode){
  if(pincode == 1234){
    cout << "ur Balance is : 7500 \n";
  }
  else{
    cout << "Wrong Pin";
  }
  return pincode;
}
int main(){
  int pincode;
  ReadPin(pincode);
  CheckPin(pincode);
}