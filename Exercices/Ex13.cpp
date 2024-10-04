#include <iostream>
using namespace std;
int main(){
  cout << "\n\n We are gonna to calculate TotalBill"<< endl;
  float TotalBill, CashPaid, remainder;
  cout << "Enter your TotalBill of your order : " << endl;
  cin >> TotalBill;
  cout << endl;
  cout << "Enter what u got of ur money : " << endl;
  cin >> CashPaid;
  cout << endl;
  remainder = CashPaid - TotalBill;
  cout << "The remainder is : " << remainder;
  return 0;
}