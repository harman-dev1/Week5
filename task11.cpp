#include<iostream>
using namespace std;
int oddEven(int number);
main()

{
  system("cls");
  int number;  
  cout<<"Enter 5 digit  number:";
  cin>>number;
  number=oddEven(number);
  if(number%2==0)
   {
     cout<<"Number is evenish";
   }
  if(number%2!=0)
   {
     cout<<"Number is oddish";
   }
}
int oddEven(int number)
{
  int total;
  int a,b,c,d,e,f,g,h;
  a=number%10;
  b=number/10;
  c=b%10;
  d=b/10;  
  e=d%10; 
  f=d/10;  
  g=f%10; 
  h=f/10;  
  total=a+c+e+g+h;
  return total;
}
  