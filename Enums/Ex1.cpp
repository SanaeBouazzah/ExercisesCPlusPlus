// Exercise 3:
// write a program to ask the user to enter a number, then print ODD if it's odd,
// or EVEN if it's even.
// PS: Use Enums
#include <iostream>
using namespace std;
enum enNumberType
{
  ODD = 1,
  EVEN = 2
};
int PrintNumber()
{
  int num;
    cout << "\nEnter a num : \n";
    cin >> num;
    return num;
}
enNumberType CheckNumberType(int num)
{
  int result = num % 2;
  if (result == 0)
  {
    return enNumberType::EVEN;
  }
  else
  {
    return enNumberType::ODD;
  }
}
void ReadNumber(enNumberType Numbertype)
{
  if (Numbertype == enNumberType::EVEN)
  {
    cout << "number u entred is Even";
  }
  else
  {
    cout << "number u entred is ODD ";
  }
}
int main()
{
    for (int i = 0; i < 3; i++){
      ReadNumber(CheckNumberType(PrintNumber()));
    }

  return 0;
}