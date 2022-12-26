#include<iostream>
using namespace std;
class Shape
{
	protected:float area;
		  float peri;
	public:
		  virtual void getdata()=0;
		  virtual void calarea()=0;
		  virtual void display()=0;
		  virtual void calperi()=0;
};
class rectangle: public Shape
{
	float length;
	float breath;
	public:void getdata()
	       {
		       cout<<"enter length and breath"<<endl;
		       cin>>length>>breath;
	       }
	       void display()
	       {
		       cout<<"rectangle area="<<area<<endl;
		       cout<<"peri="<<peri<<endl;
	       }
		void calarea()
		{
			area=length*breath;
		}
		void calperi()
		{
			peri=2*(length+breath);
		}
};
class circle:public Shape
{
	float radious;
	public:void getdata()
		{
			cout<<"enter radious"<<endl;
		}
		void display()
		{
			cout<<"area="<<area<<endl;
			cout<<"peri="<<peri<<endl;
		}
		void calarea()
		{
			area=3.14*radious*radious;
		}
		void calperi()
		{
			peri=3.14*radious;
		}
};
int  main()
{
	Shape *ptr;
	int sw;
	while(1)
	{
		cout<<"enter 1:rectangle 2:circle 3:exit"<<endl;
		cin>>sw;
		switch(sw)
		{
			case 1:ptr=new rectangle;
				ptr->getdata();
				ptr->calarea();
				ptr->calperi();
				ptr->display();
				break;
			case 2:
				ptr=new circle;
				ptr->getdata();
				ptr->calarea();
				ptr->calperi();
				ptr->display();
				break;
			case 3:
					return 0;
			default:
				cout<<" wrong option"<<endl;
		}//switch
	}//while
}//main
