//write a program to read the ATM Pin code from the user
// then check if Pin code = 1234, then show the balance to 
// user the balance is 7500. 
//Example : 1234, 5151            Output : ur balance is :7500, wrongPin
#include<iostream>
using namespace std;
int main(){
  int Pincode = 1234;
  cout << "\nEnter Pin code : \n";
  cin >> Pincode;
  cout <<(Pincode == 1234 ? "ur Balance is : 7500" : "Wrong Pin");
}