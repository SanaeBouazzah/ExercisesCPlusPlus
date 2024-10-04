#include <iostream>
using namespace std;
enum enumDay {Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6,
               Saturday = 7};
void ReadDays(){
  cout << "\n************************\n";
  cout << "\t\t\t  Week Days";
  cout << "\n************************\n";
  cout << "1: Sunday \n";
  cout << "2: Monday \n";
  cout << "3: Tuesday \n";
  cout << "4: Wednesday \n";
  cout << "5: Thursday \n";
  cout << "6: Friday \n";
  cout << "7: Saturday";
  cout << "\n************************\n";
  cout << "Please Enter number of day : \n";
}
enumDay PrintDays(){
 enumDay weekday;
 int wd;
 cin >> wd;
 return (enumDay) wd;
}
string GetWeekDayName(enumDay WeekDay)
{
    switch (WeekDay) {

    case enumDay::Sunday:
        return "Sunday";
        break;
    case enumDay::Monday:
        return "Monday";
        break;
    case enumDay::Tuesday:
        return "Tuesday";
        break;
    case enumDay::Wednesday:
        return "Wednesday";
        break;
    case enumDay::Thursday:
        return "Thursday";
        break;
    case enumDay::Friday:
        return "Friday";
        break;
    case enumDay::Saturday:
        return "Saturday";
        break;
    default:
        return "Not a week day!\n";
    }

}
int main()
{
  int day;
  ReadDays();
  cout << GetWeekDayName(PrintDays());

 return 0;
}
