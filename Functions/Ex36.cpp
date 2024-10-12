//Exercise 36 : write a program to ask the user to enter TotalSales,
//the commission is calculated as one percentage the TotalSales amount,
//all you need is to decide which percentage to use the following:
//  >1.000.000 -> Percentage 1%.
//  >500k to 1M -> Percentage 2%.
//  >100k to 500k -> Percentage 3%.
//  >50k to 100k -> Percentage 5%.
//  otherwise -> Percentage 0%.
//  Ex : 110.000     Output: 3300.
#include <iostream>
using namespace std;

double Readfunc(){
  double TotalSales;
  cout <<"\nEnter your Total Sales : \n";
  cin >> TotalSales;
  return TotalSales;
}
double CalculateCommission(double TotalSales){
  double Commission;
  if(TotalSales > 1000000 ){
    Commission = TotalSales * 0.01;
  }else if (TotalSales > 500000 && TotalSales <= 1000000)
  {
    Commission = TotalSales * 0.02;
  }else if (TotalSales > 100000 && TotalSales <= 500000)
  {
    Commission = TotalSales * 0.03;
  }else if (TotalSales > 50000 && TotalSales <= 100000)
  {
    Commission = TotalSales * 0.05;
  }else{
    Commission = TotalSales;
  }
  return Commission;
}
void Printfunc(double TotalSales){
  cout << "The Commission is : " << CalculateCommission(TotalSales);
}
int main()
{
  double TotalSales;
  Printfunc(Readfunc());
  return 0;
}