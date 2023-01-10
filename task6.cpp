#include<iostream>
#include<cmath>
using namespace std;
bool check(int true,int a, int c);
main()
{
  int a,b,c,true,falsenumber;
  cout<<"Enter number:";
  cin>>number;
  a=number%10;
  b=number/10;
  cout<<b<<endl;
  c=b/10;
  check(true, a, c);
  true=cout<<"Number is symmterical";
  false=cout<<"number is not symmterical";}
bool check(int true, int a, int c,int false)
{  
   if(a==c)  
   {
    return true;
   }
  if(a!=c)
   {
    return false;
   }
  
}