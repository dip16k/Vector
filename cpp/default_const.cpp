#include<iostream>
using namespace std;
class Std{
	int roll;
	string name;
	float m1,m2;
	float total;
	float per;
	char grade;
	public: Std()
		{// default constructor
			roll=0;m1=m2=0;
			per=0;
			grade='\0';total=0;
		}
		void get_data()
		{
			cout<<"enter roll name m1,m2"<<endl;
			cin>>roll>>name>>m1>>m2;
		}
		void result()
		{
			cout<<"m1="<<m1<<"  m2="<<m2<<"  grade= "<<grade<<endl;
			cout<<"name="<<name<<endl;
		}
		void test()
		{
			total=m1+m2;
			per=total/200*100;
			if(per>80)
				grade='A';
			else if(per>60 && per<80)
				grade='B';
			else
				grade='C';
		}
};
main()	
{
	Std obj;
		obj.result();
		obj.get_data();
		obj.test();
		obj.result();
}
