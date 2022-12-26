#include<iostream>
using namespace std;
class SBI;	//forward declaration
class Bank
{
	int acc
	string name;
	float bal;
	float deposite;
	public:
		Bank()
		{
			acc=bal=deposite=0;
			name="\0";
		}
		void EnterDetail()
		{
			cout<<"enter name"<<endl;
				cin>>name;
			cout<<"enter acc"<<endl;
				cin>>acc;
			cout<<"enter amount to deposite"<<endl;
				cin>>deposite;
			bal=deposite;
		}
		void Deposite(float rs)
		{
			deposite=rs;
			bal=bal+rs;
		}
		void Bal()
		{
			cout<<"acc="<<acc<<"name"<<name<<endl;
			cout<<"bal="<<bal<<endl;
		}
	void transaction(SBI &);
};
class SBI
{
	int acc;
	string name;
	float bal;
	public:
		SBI()
		{
			acc=0;bal=0;name="\0";
		}
		void EnterDetail()
		{
			cout<<"enter name"<<endl;
				cin>>name;
			cout<<"enter acc"<<endl;
				cin>>acc;
			cout<<"enter bal"<<endl;
				cin>>bal;
		}
		void Bal()
		{
			cout<<"acc="<<acc<<" name"<<name<<endl;
			cout<<"bal= "<<bal<<endl;
		}
		friend void BANK::transaction(SBI &);
};
void BANK:: transaction(BOI &myacc)
{
	float amt;
	cout<<"enter amount"<<endl;
		cin>>amt;
	if(amt<bal)
	{
		bal-=amt;
		myacc+=amt;
	}
}
	
main()
{
	BANK obj;
		obj.EnterDtail();
	SBI obj1;
		obj1.EnterDetail();
	obj.bal();
	obj1.bal();
		obj1.transaction(
}
