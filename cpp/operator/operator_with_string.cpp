#include<iostream>
#include<cstring>
using namespace std;
class String
{
	char str[20];
	public: String()
		{
			//
		}
		String(char *s)
		{
			strcpy(str,s);// copy string to str
		}
		String operator +(String &obj)// receving string modifing action
		{
			String temp;
			strcat(str,obj.str);
			strcpy(temp.str,str);
			return temp;
		}
		void display()
		{
			cout<<"after concat: "<<str<<endl;
		}
		~String()
		{
			cout<<"destructor"<<endl;
		}
};
main()
{
	String obj1("dip+");
	String obj2("sop");
	String obj3;
		obj3=obj1+obj2;
	obj3.display();
}	
