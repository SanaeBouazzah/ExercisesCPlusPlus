//Write a C++ program to compute the total and average of four numbers.
//Compute the total and average of four numbers :
#include <iostream> 
#include <cmath> 
using namespace std; 
int main(){
  int num1, num2, num3, num4;
  cout << "\nEnter four numbers : \n";
  cin >> num1 >> num2 >> num3 >> num4;
  double Total = num1 + num2 + num3 + num4;
  double average = Total / 4;
  cout << "\nTotal of four numbers is : " << Total <<endl;
  cout << "Average of four numbers is : " << average;
}