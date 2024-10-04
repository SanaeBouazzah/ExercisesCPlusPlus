//write a program to calculate the task duration in seconds and 
//print it on screen, given the time duration of a task in the number
//of : days, hours, minutes, seconds.
//Example : 2, 5, 45, 35. Output : 193535
#include <iostream>
using namespace std;


int main()
{
    int Days, Hours, Minutes, Seconds;
    cout << "Please Enter your Timing to convert it to seconds : \n\n\\n";
    cout << "Enter Days : \n";
    cin >> Days;
    cout << "\nEnter Hours : \n";
    cin >> Hours;
    cout << "\nEnter Minutes : \n";
    cin >> Minutes;
    cout << "\nEnter Seconds : \n";
    cin >> Seconds;

    double Pdays = Days * 24 * 60 * 60;
    double Phours = Hours * 60 * 60;
    double Pminutes = Minutes * 60;
    double duration = Pdays + Phours + Pminutes + Seconds;
    cout << "\n The Duration is : " << duration;

  return 0;
}