// write a program to ask the user to enter number and then print :number^2, number^3, number^4
// Example : 3.   Output : 9, 27, 81.    

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int num;
  cout << "\nEnter Please number : \n";
  cin >> num;
  int A = num * num;
  int B = A * num;
  int C = B * num;
  cout << "The Result is : " << A << "\n" << B << endl << C;
  

}