#include<iostream>
using namespace std;
template<class any>
 any  calsi(any x,any y,char ch)
{
	any result;
	cout<<"ch="<<ch<<endl;
	if(ch=='+')
		result=x+y;
	else if(ch=='-')
		result=x-y;
	else if(ch=='/')
		result=x/y;
	else
		result=x*y;

	return result;
}

	
main()
{
	cout<<"result="<<calsi(10,20,'+')<<endl;
	cout<<"result="<<calsi(20,20,'-')<<endl;
	cout<<"result="<<calsi(10,20,'*')<<endl;
	cout<<"result="<<calsi(100,20,'/')<<endl;
	
}
