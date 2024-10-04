//write a program to ask the user to enter TotalSales, the commission
//is calculated as one percentage The total sales amount, all u need
//is to decide which percentage to use the following:
//>1000.000 --> Percentage is 1%.
//>500K to 1M --> Percentage is 2%.
//>100K to 500K --> Percentage is 3%.
//>50K to 100K --> Percentage is 5%.
//>otherwise --> Percentage is 0%.
//Example : 110.000.          Output : 3300.
#include <iostream>
using namespace std;
int main(){
  double TotalSales, TotalCommission;
  cout << "\nEnter the Total Sales : \n";
  cin >> TotalSales;
  if(TotalSales > 1000000){
    TotalCommission = TotalSales * 1 / 100;
    cout << "Ur Total Commission is : " << TotalCommission;
  }else if(TotalSales > 500000 && TotalSales <= 1000000){
    TotalCommission = TotalSales * 2 / 100;
    cout << "Ur Total Commission is : " << TotalCommission;
  }
  else if(TotalSales > 100000 && TotalSales <= 500000 ){
    TotalCommission = TotalSales * 3 / 100;
    cout << "Ur Total Commission is : " << TotalCommission;
  }
  else if(TotalSales >50000 && TotalSales <= 100000){
    TotalCommission = TotalSales * 5 / 100;
    cout << "Ur Total Commission is : " << TotalCommission;
  }else{
    TotalCommission = TotalSales * 0 / 100;
    cout << "Ur Total Commission is : " << TotalCommission;
  }
}