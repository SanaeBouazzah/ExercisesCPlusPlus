//Exercise 1 :
// Write a C++ program to calculate the sum of all even and odd numbers in an array.
// Sample Output:
// Original array: 1 2 3 4 5 6 7 8
// Sum of all even and odd numbers: 20, 16.
#include <iostream>
using namespace std;

int main(){
  int numbers[]{1, 2, 3, 4, 5, 6, 7, 8};
  int count = sizeof(numbers) / sizeof(int); // 8
  cout << count <<endl;
  int sumEven = 0, sumOdd = 0;
  for (int i = 0; i < count; i++)
  {
    if(numbers[i] % 2 == 0){
     sumEven += numbers[i];
   }
   else{
    sumOdd += numbers[i];
   }
  }
  cout << "\nsum of Even Numbers : " << sumEven <<endl;
  cout << "sum of Odd Numbers : " << sumOdd <<endl;
}