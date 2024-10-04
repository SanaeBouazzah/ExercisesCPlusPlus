//Exercise 34:
// Write a C++ program to print the following pattern.
// Sample Output:
//  xxxxx                                                                                                        
// x     x       x        x                                                                                      
// x             x        x                                                                                      
// x          xxxxxxx  xxxxxxx                                                                                   
// x             x        x                                                                                      
// x     x       x        x                                                                                      
//  xxxxx  
#include<iostream>
using namespace std;

int main(){
  cout << " xxxxx\n";
  cout << "x\t\t\tx\t\t\t\t x\t\t\t\t\tx\n"
       << "x\t\t\t\t\t\t\t x\t\t\t\t\tx\n" 
       << "x\t\t\t\t\t\txxxxxxx \t xxxxxxx  \n"
       << "x\t\t\t\t\t\t\t x\t\t\t\t\tx\n" 
       << "x\t\t\tx\t\t\t\t x\t\t\t\t\tx\n";
  cout << " xxxxx\n";

}