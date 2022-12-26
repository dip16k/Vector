#include<iostream>
using namespace std;
main()
{
	int num1,num2;
	cout<<"enter number 1"<<endl;
		cin>>num1;
next:	cout<<"enter num2"<<endl;
		cin>>num2;
	try
	{
		if(num2==0)
		{
			cout<<" division with zero not allowed"<<endl;
			throw 0;
		}
		else
		{
			int num3=num1/num2;
		}
	}
	catch(int x)
	{
		cout<<"exeption received="<<x<<endl;
	}
}
