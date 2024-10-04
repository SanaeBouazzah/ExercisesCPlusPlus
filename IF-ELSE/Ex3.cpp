//write a program to ask the user to enter : Note, then print
//"pass" if Note >= 50, otherwise print "Fail".
//Example : 45.             Ouput : Fail.
#include <iostream>
using namespace std;
int main (){
  int note;
  cout << "\nEnter ur Note : \n";
  cin >> note;
  cout << "Your Note is : " << note << endl;
  cout << (note >=50? "Pass" : "Fail");
}