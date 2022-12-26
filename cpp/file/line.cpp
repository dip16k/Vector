#include<iostream>
using namespace std;
main()
{
	char str[100];
	cout<<"enter a string"<<endl;
	cin.getline(str,50);
	cout.write(str,50);/*it will write all the 50 bytes coz it doesnot have null mechanism to terminate the writing*/
cout<<endl;
}
