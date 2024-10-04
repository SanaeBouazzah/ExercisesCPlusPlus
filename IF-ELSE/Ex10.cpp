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
  if(day >= 1 && day <=7){
    if(day == 1)cout << "Sunday.";
    else if(day == 2) cout << "Monday.";
    else if(day == 3) cout << "Tuesday.";
    else if(day == 4) cout << "Wednesday.";
    else if(day == 5) cout << "Thursday.";
    else if(day == 6) cout << "Friday.";
    else if(day == 7) cout << "Saturday.";
  }else{
    cout << "\nWrong Day!!!!!! Enter again a number between 1 and 7 : \n";
  }
}