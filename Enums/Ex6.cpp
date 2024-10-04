// Exercise 28: write a program to sum odd numbers from 1 to N.
// Input : 10.               Output : 25.
#include <iostream>
using namespace std;
enum enODD {ODD = 1, EVEN = 2};
void ReadNumber(int &num){
  cout << "\nEnter num : \n";
  cin >> num;
}

enODD check(int num){
  if(!(num % 2 == 0)){
    return enODD::ODD;
  }else{
    return enODD::EVEN;
  }
}

int sumNumbersUsingFor(int num){
  int result = 0;
  for (int i = 1; i <= num; i++)
  {
    if(check(i) == enODD::ODD){
      result += i;
    }
  }
  return result;
}

int sumNumbersUsingWhile(int num){
  int sum = 0;
  int i = 0;
  while (i < num)
  {
    i++;
    if (check(i) == enODD::ODD)
    {
     sum +=i; 
    }
  }
  return sum;
}

int sumNumbersUsingDoWhile(int num){
  int result = 0;
  int counter = 0;
  do
  {
    counter++;
    if (check(counter) == enODD::ODD)
    {
      result += counter;
    }
    
  } while (counter < num);
  return result; 
}

void PrintSum(int num){
  cout << "the result is : " << sumNumbersUsingFor(num);
  cout <<"\n###################\n";
  cout << "the result is : " << sumNumbersUsingWhile(num);
  cout <<"\n###################\n";
  cout << "the result is : " << sumNumbersUsingDoWhile(num);
}

int main(){
  int num;
  ReadNumber(num);
  PrintSum(num);
}