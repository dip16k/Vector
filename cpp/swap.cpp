#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;	
}
main()
{
	int x=10,y=20;
	cout<<x<<" "<<y<<endl;
	swap(x,y);
	cout<<x<<" "<<y<<endl;
}
