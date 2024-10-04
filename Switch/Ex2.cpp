//write a program to ask the user to enter day then print the day
//as follows : 1 - Print Sunday
            // 2 - Print Monday
            // 3 - Print Tuesday
            // 4 - Print Wednesday
            // 5 - Print Thursday
            // 6 - Print Friday
            // 7 - Print Saturday
//Otherwise print wrong Day and ask the user to enter day again.
//Example : 6.         Output : Friday.
#include <iostream>
using namespace std;
int main(){
  int day;
  cout << "\nEnter a number between 1 to 7 : \n";
  cin >> day;
  switch (day)
  {
  case 1: cout << "Sunday.";
    break;
  case 2: cout << "Monday.";
    break;
  case 3: cout << "Tuesday.";
    break;
  case 4: cout << "Wednesday.";
    break;
  case 5: cout << "Thursday.";
    break;
  case 6: cout << "Friday.";
    break;
  case 7: cout << "Saturday.";
    break;
  default: cout << "\nWrong Day!!!!!! Enter again a number between 1 and 7 : \n";
    break;
  }
}