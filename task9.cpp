#include<iostream>
using namespace std;
char check(char alphabet);
main()
{
  char alphabet;
  cout<<"Enter alphabet(A or a)";
  cin>>alphabet;
  check(alphabet);
}
char check(char alphabet)
{
  if(alphabet=='A')
   {
     cout<<"Alpahbet is in capital case";
   }
  if(alphabet=='a')
   {
      cout<<"Alphabet is in small case";
   }
}