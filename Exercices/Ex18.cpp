#include <iostream>
using namespace std;
int main(){
  cout << "Calculate loan Amount and how many months you need to settle the loan " << endl;
  float loanAmount, Months;
  cout << "What's your Loan Amount You want ? " <<endl;
  cin >> loanAmount;
  cout << endl;
  cout << "Chose Months you need to settle the loan ? " << endl;
  cin >> Months;
  cout << endl;

  float MonthlyPayment = loanAmount / Months;
  cout << "Monthly Payment you are gonna get is : " << MonthlyPayment;
  return 0;
}