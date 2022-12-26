#include<iostream>
#include<cstring>
using namespace std;
class ABC
{
	int size;
	char *ptr;//
	char str[20];
	public:
		ABC()// default constructor
		{
			size=0;ptr=NULL;
		}
		ABC(ABC &obj)// deep copy constructor
		{
			int ln;
			ln=strlen(obj.ptr)+1;
			ptr=new char[ln];
			strcpy(ptr,obj.ptr);
			strcpy(str,obj.str);
			size=obj.size;
		}
		ABC(const char *p,const char *s)// parameter constructor
		{	
			int n=sizeof(p);
			ptr=new char[n];
			strcpy(ptr,p);
			strcpy(str,s);
		}
		void display()
		{
			cout<<"ptr="<<ptr<<endl;
			cout<<"str="<<str<<endl;
		}
		~ABC()
		{
			delete[]ptr;
		}
};
main()
{
	ABC obj("hi ","praveen");
		obj.display();
	cout<<" copy >>"<<endl;
	ABC obj1=obj;
		obj1.display();

}
