#include <iostream>
using namespace std;
int main(){
  cout<< "\n \n We are gonna calculate duration in seconds" << endl;
  float day, hour, minute, Seconds;
  float Days, Hours, Minutes;
  cout << "Enter days : "<< endl;
  cin >> day;
  cout << endl;
  cout << "Enter Hours : "<< endl;
  cin >>hour;
  cout << endl;
  cout << "Enter Minutes : "<< endl;
  cin >> minute;
  cout << endl;
  cout << "Enter seconds : "<< endl;
  cin >> Seconds;
  cout << endl;
  Days = day * 24 * 60 * 60;
  Hours = hour * 60 * 60;
  Minutes = minute * 60;
  Seconds = Seconds + Days + Hours + Minutes;
  cout << "All this in seondes is : "<< Seconds;
  return 0;
}