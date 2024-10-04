// write a program to ask the user to enter number, M and then print :number^M,
// Example : 2, 4.   Output : 16.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num, M, result = 1;
  cout << "\nEnter Please number : \n";
  cin >> num; 
  cout << "\nEnter Please M : \n";
  cin >> M;
  // Method 1 :// result = pow(num, M);
  // Methode 2 :
  if (M == 0)
  {
    cout << "The result is : " << result;
  }
  else
  {
    int i = 1;
    for (; i <= M; i++)
    {
      result *= num;
    }
  }
}