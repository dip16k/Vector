#include<iostream>
using namespace std;
template<class any>
class dip
{
	any *ptr;
	int size;
	public:dip()
		{
			ptr=NULL;
			size=0;
		}
		dip(int a)
		{
			size=a;
			ptr=new any [size];
			cout<<"enter the element"<<endl;
			for(int i=0;i<size;i++)
				cin>>ptr[i];
		}
		void display()
		{	
			for(int i=0;i<size;i++)
				cout<<ptr[i]<<endl;
		}
	~dip()
	{
		cout<<"destructor"<<endl;
	}
};
main()
{
	dip<int>obj(5);
	obj.display();
	dip<char>obj2(5);
	obj2.display();
}
