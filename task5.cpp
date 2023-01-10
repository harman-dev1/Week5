#include<iostream>
#include<cmath>
using namespace std;
main()
{
  int a=5,b=6,c=1;
  float result1,result2;
  result1=sqrt(b*b-4*a*c);
  result1=-b-result1;
  result1=result1/(2*5);
  cout<<"Result:"<<result1<<endl;
  result2=sqrt(b*b-4*a*c);
  result2=-b+result2;
  result2=result2/(2*5);
  cout<<"Result:"<<result2<<endl;
 }
  