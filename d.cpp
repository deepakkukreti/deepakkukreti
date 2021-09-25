//DEEPAK CHAND KUKRETI//
//SECTIO: M//
//STUDENT ID :20011568//

#include <iostream>
using namespace std;
void area(int);//for square//
void area(int,float);//for rectangle//
void area(int,int);//for circle//

int main()
{
   int a,l,b,r;
   cout<<"Enter the side of square";
   cin>>a;
   cout<<"Enter the length and breadth of rectangle ";
   cin>>l>>b;
   cout<<"Enter the radius of circle";
   cin>>r;
   {
       void area(int);
       cout<<"\nAREA OF SQUARE "<< a*a;
      
   }
   {
       void area(int,float);
       cout<<"\nAREA OF RECTANGLE "<< l*b;
    
   }
   {
       void area(int,int);
       cout<<"\nAREA OF CIRCLE "<< 3.14*r*r;
       
   }
   return 0;
   
}

