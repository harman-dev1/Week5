#include<iostream>
using namespace std;
int mul(int number);
main()
{
  int number;
  cout<<"Enter number:";
  cin>>number;
  number=mul(number);
  cout<<"Number after multiply is :"<<number;
}
int mul(int number)
{
  int total;
  total=5*number;
  return total;
}