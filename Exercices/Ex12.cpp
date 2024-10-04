#include <iostream>
using namespace std;
int main(){

  cout << "\n We are gonna calculate Pennies and Dollars" << endl;
  float Pennies, Nickel, Dime, Quarters, Dollar;
  cout << "Enter Your Pennies : " << endl;
  cin >> Pennies;
  cout << endl;
  cout << "Enter Your Nickel : " << endl;
  cin >> Nickel;
  cout << endl;
  cout << "Enter your Dime : " << endl;
  cin >> Dime;
  cout << endl;
  cout << "Enter your Quarters : " << endl;
  cin >> Quarters;
  cout << endl;
  cout << "Enter your Dollar : " << endl;
  cin >> Dollar;
  cout << endl;
  Nickel = Nickel * 5;
  Dime = Dime * 10;
  Quarters = Quarters * 25;
  Dollar = Dollar * 100;
  float TotalP = Pennies + Nickel + Dime + Quarters + Dollar, TotalD = TotalP / 100;
  cout  << "Your Pennies is : "<< TotalP << endl;
  cout << "Your Dollars is : " << TotalD << endl;
  return 0;
}