//Write a C++ program to compute the quotient and quotient.
// Compute quotient and remainder :
//Example : 25, 3. Output : 8, 1.
#include <iostream> 
#include <cmath> 
using namespace std; 
int main(){
  cout << "Calculate the quotient and quotient \n";
  int dividend, divisor;
  cout << "Input the dividend number : " <<endl;
  cin >>dividend;
  cout << "Input the divisor : " << endl;
  cin >> divisor;
  double result = dividend / divisor;
  double remainder = fmod(dividend, divisor);
  cout << "The quotient of the division is : " << result<< endl;
  cout << "The remainder of the division is : " << remainder;
}