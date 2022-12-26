#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream out("data");
	out<<"hi this is test file"<<endl;
	out.close();
	ifstream in("data");
	char str[50];
	while(in)
	{
		in>>str;
	cout<<"str:"<<str<<endl;
	}
}
