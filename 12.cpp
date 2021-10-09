//deepak chand kukreti//
//M//
//20011568//




#include<iostream>
using namespace std;
class Base
{
	public:
	int x;
   static int y;
};
	int Base::y;//definingy;
	int main()
	{
	
		Base luck;
		luck.x=12;
		luck.y=22;

		luck.x=22;
		luck.y=32;
		cout<<"value of "<< luck.x<<endl;
		cout<<"value of "<< luck.y<<endl;
		return 0;
 }

