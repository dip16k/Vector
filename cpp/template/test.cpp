/* calsi */
#include<iostream>
using namespace std;
template<class any>
any calsi(any x,any y)
{
	any result;
	result=x+y;
	return result;
}
main()
{
	cout<<"result="<<calsi(10,20)<<endl;
}

