//Exercise 35 : write a program ro ask the user to enter Grade,
//and then print the grade as follows :
// 90 - 100 Print A.
// 80 - 89 Print B.
// 70 - 79 Print C.
// 60 - 69 Print D.
// 50 - 59 Print E.
// otherwise Print F.      Ex: 95. Output : A.
#include <iostream>
using namespace std;

double Readfunc(double &grade)
{
  cout << "\nEnter ur Grade : \n";
  cin >> grade;
  return grade;
}

double Grades(double grade)
{
  if (grade >= 0 && grade <= 100)
  {
    if (grade >= 90 && grade <= 100)
    {
      cout << "Grade A";
    }
    else if (grade >= 80 && grade <= 89)
    {
      cout << "Grade B";
    }
    else if (grade >= 70 && grade <= 79)
    {
      cout << "Grade C";
    }
    else if (grade >= 60 && grade <= 79)
    {
      cout << "Grade D";
    }
    else if (grade >= 50 && grade <= 59)
    {
      cout << "Grade E";
    }
    else
    {
      cout << "Grade F";
    }
  }else{
    cout << "Invalid Grade. Enter Grade between 0 and 100";
  }
  return grade;
}

int main()
{
  double grade;
  Grades(Readfunc(grade));
  return 0;
}