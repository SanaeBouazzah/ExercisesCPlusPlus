#include <iostream>
using namespace std;
int main(){
  cout << "\n \n We are gonna to calculate"<< endl << endl;
  float BillValue, TotalBill;
  cout << "Enter Your Bill Value: " << endl;
  cin >> BillValue;
  cout << endl;
  TotalBill = (BillValue * 0.1) + BillValue;
  TotalBill = TotalBill + (TotalBill * 0.16);
  cout << "The Total Bill of your order is : " << TotalBill;
  return 0;
}