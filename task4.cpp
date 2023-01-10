#include<iostream>
#include<cmath>
float calculate(float degree,float h);
using namespace std;
main()
{
  float h;int base;float degree;
 
  cout<<"enter base";
  cin>>base;
  cout<<"enter angle:";
  cin>>degree;
  degree=degree*(3.14/180);
  cout<<"degree:"<<degree;
  
  degree=tan(degree);
  h=calculate(base,degree);
  cout<<"Height is:"<<h;
}
float calculate(float base,float degree)
{
  float h=degree*base;
  return h;
}