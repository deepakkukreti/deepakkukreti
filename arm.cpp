NAME :- DEEPAK CHAND KUKRETI
SITON :- M
STUDENT ID :- 20011568

//Write a program to find a num. is wheher armstrong or not// 
#include<iostream> 
using namespace std;
int main()
{
 int n,r,temp,sum=0;
 cout<<"Enter the number : ";
 cin>>n;
 
 temp=n;
 
 while(n>0)
 {
  r=n%10;
  sum=sum+(r*r*r);
   n=n/10;
 }
  if(temp==sum)
  cout<<"ARMSTRONG NUMBER:"<<endl;
  else
  cout<<"NOT ARMSTRONG NUMBER:"<<endl;
  
return 0;

}
