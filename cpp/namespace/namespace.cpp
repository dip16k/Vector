#include<iostream>
using namespace std;
class ABC
{
	public:mutable int x;
	float y;
	public:ABC()
		{
			x=10;y=1.50;
		}
	void display()
	{
		cout<<"namespace x"<<x<<endl;
	}
	 void  modify(int z) const
	{
		x=z;	 
		cout<<"const "<<z<<endl;
	}
};

//using namespace ABC;
main()
{
	ABC obj;
	cout<<"main="<<obj.x<<endl;
	obj.display();
	obj.modify(50);
}
