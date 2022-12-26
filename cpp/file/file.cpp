#include<iostream>
using namespace std;
main()
{	
	int i=0;
	char ch;
	char buf[100];
	cout<<"enter a char"<<endl;
/*getc and putc are the member function of the class and cin and cout are the objects .. define in iostream */

	i=0;
	do
	{
		cin.get(ch);
		buf[i]=ch;
		i++;
	}	
	while(ch=!EOF);

	cout<<"buf= "<<buf<<endl;
	
	cout<<endl;
}
