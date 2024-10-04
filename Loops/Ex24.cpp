// Exercise 50 :
// write a program to read ATMPincode from the user then check if Pincode = 1234,
// then show the balance to user, otherwise print "wrong Pin" and ask the user
// to enter the Pincode again. Only user must enter the Pin 3 times, if it fails,
// print "Card is locked". Assume user Balance is 7500.
// Input : 1234                    Output : your balance is 7500.
// PS: Use Loop While.
#include <iostream>
using namespace std;
int main()
{
  string pincode = "1234";
  int i = 1;
  int iterations = 3;
  int iter = iterations;
  while (true)
  {
    cout << "\nEnter PinCode : \n";
    cin >> pincode;
    if (i == iterations)
    {
      cout << "Your Card is locked. Oops!!!";
      break;
    }else{
      if (pincode == "1234")
      {
        cout << "Your balance is 7500";
        break;
      }
      else
      {
        cout << "Wrong Pin, Repeat again... You still have " <<  --iter << " time";
      }
    }
    i++;
  }
}