#include<iostream>
using namespace std;
class STUDENT
{
	public:int roll;
	string name;
	protected:STUDENT()// default constructor
		{
			roll=0;name="\0";
		}
		STUDENT(int id,string str)//parameterized constructor
		{
			roll=id;
			name=str;
		}
		virtual void display()=0;// making absolute virtual function
};
class SPORT:public STUDENT
{
	float m1;
	float m2;
	float m3;
		public:SPORT()// default constructor
			{
				m1=m2=m3=0;
			}
		SPORT(int r,string str,float test1,float test2,float test3):STUDENT(r,str)
		{
			m1=test1;
			m2=test2;
			m3=test3;
		}
		void display()
		{
			cout<<"name="<<name<<endl<<"roll="<<roll<<endl;
			cout<<"m1="<<m1<<" m2"<<m2<<" m3"<<m3<<endl;
		}
		~SPORT()
		{
			cout<<"destructor"<<endl;
		}
};
main()
{
	SPORT obj(10,"dip",10,20,30);
	SPORT obj1;
		obj.display();
	string s="dileep";
	char str[20];
//	strcpy(str,s)
//	cout<<s<<endl;
//		cout<<"strlen=:  "<<strlen(str)<<endl;
}
