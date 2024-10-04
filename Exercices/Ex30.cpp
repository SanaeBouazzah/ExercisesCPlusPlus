//write a program that inputs the number of seconds and changes it to
//days, hours, minutes, seconds.
//Example :seconds = 193535. Output : 2, 5, 45, 35.
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
  double TotalSeconds;
  cout << "\nEnter please Seconds : \n";
  cin >> TotalSeconds;

  double SecondsPerDays = 24 * 60 * 60;
  double SecondsPerHours =  60 * 60;
  double SecondsPerMinutes =  60;

  double Days = TotalSeconds / SecondsPerDays;
  double res = fmod(TotalSeconds, SecondsPerDays);
  double Hours = res / SecondsPerHours;
  res = fmod(res, SecondsPerHours);
  double Minutes = res / SecondsPerMinutes;
  res = fmod(res, SecondsPerMinutes);
  double Seconds = res;

  cout << "Days    : " << trunc(Days) << endl;
  cout << "Hours   : " << trunc(Hours) << endl;
  cout << "Minutes : " << trunc(Minutes) << endl;
  cout << "Seconds : " << trunc(Seconds) << endl;

  

  return 0;
}

