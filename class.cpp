//WAP for Base class //
//NAME: DEEPAK CHAND KUKRETI//
//SECTION : M//
//ID : 20011568//


#include<iostream>
using namespace std;
class Base
{
public:

	int x;
	static int y;
	void printx(){
	cout<<x<<endl;
	}
	void printy(){
	cout<<y<<endl;
	}
	};
int Base::y;
int main()
{
	 
	Base b1;
	b1.x=10;
	b1.y=55;

	
	Base b2;
	b2.x=55;
	b2.y=33;

	b1.printx();
	b1.printy();
	b2.printx();
	b2.printy();


return 0;
}




