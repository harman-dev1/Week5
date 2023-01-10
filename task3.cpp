#include<iostream>
#include<cmath>
using namespace std;
main()
{
  system("cls");
  float num1;int num2;float result;
  cout<<"Enter number1 and number2:";
  cin>>num1>>num2;
  result=pow(num1,num2);
  cout<<result<<" power of number "<<endl;
  result=cbrt(num1);
  cout<<"cube root of number is"<<result<<endl;
  result=ceil(num1);
  cout<<"celinlig is" <<result<<endl;
  result=floor(num1);
  cout<<"Floor is "<<result<<endl;
  result=max(9,4);
  cout<<result;
}
  