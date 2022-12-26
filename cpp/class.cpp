#include<iostream>
using namespace std;
class std{
		int roll;
		float m1,m2,total;
		char name[20];
		float per;
		char grade;
		public:
			void get_data()
			{
				cout<<"enter roll"<<"name marks"<<endl;
				cin>>roll>>name>>m1>>m2;
			}
			void test()
			{	
				cout<<"test mark"<<endl;
				total=m1+m2;
				per=total/200*100;
				if(per<=40)
					grade='c';
				else if(per<=70 && per>40)
					grade='b';
				else
					grade='a';
			}
			void result()
			{
				cout<<"result"<<endl;
				cout<<"per="<<per<<"  grade="<<grade<<endl;
				cout<<"mark1="<<m1<<"  mark2="<<m2<<endl;
			}
};
main()
{
	class std obj;
		obj.get_data();
	//	obj.test();
		obj.result();
		obj.test();
	obj.result();
}
