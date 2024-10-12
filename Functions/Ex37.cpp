//Exercise 37 : write a program to ask the user to enter : 
//Pennies, Nickels, Dimes, Quaters, Dollars, 
//then calculate the total pennies, total dollars and print them 
//on screen giving that :
//Penny = 1
//Nickel = 5
//Dime = 10
//Quarter = 25
//Dollar = 100
//Ex : 5 5 5 5 5  Output : 705Pennies  7.05Dollars
#include<iostream>
using namespace std;

struct stBank
{
  int Pennies, Nickel, Dime, Quarter, Dollar;
};

stBank Readfunc(){
  stBank BankContent;
  cout << "\nEnter Pennies : \n";
  cin >> BankContent.Pennies >> BankContent.Nickel >> BankContent.Dime >> BankContent.Quarter >> BankContent.Dollar;
  return BankContent;
}

double CalculateTotal(stBank BankContent){
  double TotalPennis = 
  BankContent.Pennies + (5 * BankContent.Nickel) + (10 * BankContent.Dime) + (25 * BankContent.Quarter) + (100 * BankContent.Dollar);
  return TotalPennis;
}

int main(){
 double TotalPennies = CalculateTotal(Readfunc());
 cout << "Total Pennies = " << TotalPennies;
 cout << "\nTotal Dollars = " << TotalPennies / 100;

}