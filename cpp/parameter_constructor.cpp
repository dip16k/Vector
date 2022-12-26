#include<iostream>
using namespace std;
class hi{
	int roll;
	float m1,m2,total;
	string name;
	float per;
	char grade;
	public:
		hi()
		{
			name="\0";grade='\0';
			m1=m2=total=per=0;
		}
		hi(float mark1,float mark2)
		{
			name="dip";
			roll=9;
			m1=mark1;m2=mark2;
			total=m1+m2;
			per=total/200*100;
		} 
		void get_data()
		{
			cout<<"enter roll name marks"<<endl;
			cin>>roll>>name>>m1>>m2;
		}
		void test()
		{
			total=m1+m2;
			per=total*100/200;
			if(per>70)
				grade='A';
			else if(per<70 && per>60)
				grade='B';
			else
				grade='C';
		}
		void result()
		{	cout<<"roll="<<roll<<" name="<<name<<endl;
			cout<<"m1="<<m1<<" m2="<<m2<<" total="<<total<<endl;
			cout<<"per="<<per<<endl;
		}
		
};
main()
{
	hi obj(100,98);
		obj.result();
		obj.get_data();
		obj.test();
		obj.result();

}
