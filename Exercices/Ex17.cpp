#include <iostream>
using namespace std;
int main(){

  cout << "Calculate loan Amount and how many months you need to settle the loan " << endl;
  float loanAmount, MonthlyPayment;
  cout << "Enter your loan Amount : " << endl;
  cin >> loanAmount;
  cout << endl;
  cout << "Enter your Monthly Payment :" << endl;
  cin >> MonthlyPayment;
  cout << endl;
  float PerMonths = loanAmount / MonthlyPayment;
  cout << "PerMonths is : " << PerMonths << " Months";
  return 0;

}