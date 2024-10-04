//Exercise : 36:
//  Write a C++ program that accepts the user's first and last name and prints them in reverse order with a space between them.
// -----------------------------------------------------------
// Input First Name: Alexandra
// Input Last Name: Abramov
// Name in reverse is: Abramov Alexandra
#include<iostream>
using namespace std;


int main()
{
 string FirstName;
 string LastName;
 cout << "Enter ur FirstName : \n";
 getline(cin, FirstName); 
 cout << "Enter ur LastName : \n";
 getline(cin, LastName); 
 
 cout << LastName  + " "  + FirstName;
 
  
}