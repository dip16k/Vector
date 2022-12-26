#include<iostream>
using namespace std;
class complx
{
	int real;
	int img;
	public:
		complx()// constructor
		{
			real=img=0;
		}
		void getdata()
		{
			cout<<"enter real"<<endl;
			cin>>real;
			cout<<"enter img"<<endl;
			cin>>img;
		}
		void display()
		{
			cout<<real<<"+i"<<img<<endl;
		}
		complx add(complx &obj)
		{
			complx temp;
			temp.real=real+obj.real;
			temp.img=img+obj.img;
			return temp;
		}
		~complx()
		{
			cout<<"destructor"<<endl;
		}
};
main()
{
	complx eq1;
		cout<<" calling get data functio"<<endl;
		eq1.getdata();
		eq1.display();
	complx eq2=eq1;
		cout<<"equation 2"<<endl;
		eq2.display();
	complx eq3;
		eq3=eq2.add(eq1);
		cout<<"equation  addition"<<endl;
		eq3.display();	
}
