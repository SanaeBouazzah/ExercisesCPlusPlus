#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int seconds;
  cout << "\n \n \n Enter seconds to convert them into days, hours, minutes, and seconds: " << endl;
  cin >> seconds;
  cout << endl;

  int per1 = 24 * 60 * 60;
  int per2 = 60 * 60;
  int per3 = 60;

  int days = seconds / per1;
  int remainder = (seconds%per1);
  int hours = remainder / per2;
  remainder = (remainder%per2);
  int minutes = remainder / per3;
  remainder = (remainder%per3);
  seconds = remainder;

  cout << endl << days << ":" << hours << ":" << minutes << ":" << seconds;

  return 0;
}