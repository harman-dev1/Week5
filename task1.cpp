#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
int add(int number1,int number2);
float division(int number1,int number2);
main()
{
  int number1,number2,result;
  cout<<"Enter number1:";
  cin>>number1;
  cout<<"Enter number2:";
  cin>>number2;
  system("cls");
  result=add(number1,number2);
  cout<<"Sum:"<<result<<endl;
  result=division( number1,number2);
  cout<<"division:"<<result;
  Sleep(1000);
  system("cls");
  result=max(number1,number2);
  cout<<result<< "is greater";
}
int add(int number1,int number2)
{
  int sum;
  sum =number1+number2;
  return sum;
}
float division(int number1,int number2)
{
  return number1/number2;
}