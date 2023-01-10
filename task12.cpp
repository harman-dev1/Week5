#include<iostream>
using namespace std;
main()
{
  int hours,minutes;
  cout<<"Enter hours:";
  cin>>hours;
  cout<<"Enter minutes:";
  cin>>minutes;
  int addMinutes;
  int addHours;
  addMinutes=15+minutes;
  if(addMinutes<=60)
   {
    
     
      
    cout<<hours<<":";
    cout<<addMinutes;
   }
   if(addMinutes>60)
   {
    addHours=(addMinutes/60)+hours;
    addMinutes= addMinutes%60;
    cout<<addHours<<":";
    cout<<addMinutes;


    
   }
}
     