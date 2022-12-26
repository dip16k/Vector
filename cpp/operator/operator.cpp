#include<iostream>
using namespace std;
class ABC
{
	int a;
	public:ABC()
		{
			a=0;// default constructor
		}
		ABC(int x)
		{
			a=x;// parameterized constructor
		}
		void display()
		{
			cout<<"a="<<a<<endl;
		}
	ABC operator + (ABC &obj)
	{
		ABC temp;
		temp=a+obj.a;
		return temp;
	}
	~ABC()
	{
		cout<<"destructor"<<endl;
	}
};
main()
{
	ABC obj1=(10);
	ABC obj2=(20);
	ABC obj3;
		obj3=obj1+obj2;
	obj3.display();

}
