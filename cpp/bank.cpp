#include<iostream>
using namespace std;
class BOI;
class SBI
{
	int acc;
	float bal;
	string name;
	public:SBI()
		{
			acc=0;bal=0;
			name="\0";
		}
		void getData()
		{
			cout<<"enter acc"<<endl;
				cin>>acc;
			cout<<"enter name"<<endl;
				cin>>name;
			cout<<"enter bal"<<endl;
				cin>>bal;
		}
		void balance()
		{
			cout<<"SBI bal="<<bal<<" acc="<<acc;
			cout<<" name="<<name<<endl;
		}
		void transfer(BOI &myacc);
		~SBI()
		{
			cout<<"SBI destructor"<<endl;
		}
};
class BOI
{
	int acc;
	float bal;
	string name;
	public:BOI()
		{	acc=0;
			bal=0;
			name="\0";
		}
		void getData()
		{
			cout<<"enter acc"<<endl;
				cin>>acc;
			cout<<"enter name"<<endl;
				cin>>name;
			cout<<"enter bal"<<endl;
				cin>>bal;
		}
		void balance()
		{
			cout<<"BOI bal="<<bal<<" acc="<<acc;
			cout<<" name="<<name<<endl;
		}
		~BOI()
		{
			cout<<"destructor BOI"<<endl;
		}
		friend void SBI::transfer(BOI&);// making friend to sbi
};

void SBI::transfer(BOI &myacc)
{
	float amt;
		cout<<"enter amount to transfer"<<endl;
			cin>>amt;
		if(amt<bal)
		{
			bal=bal-amt;
			myacc.bal+=amt;
		}
		else
			cout<<"insufficient balance"<<endl;
}		
main()
{
	SBI facc;
	BOI sacc;
	cout<<"enter data for facc"<<endl;
		facc.getData();
	cout<<"enter data for sacc"<<endl;
		sacc.getData();
	cout<<"transcation function"<<endl;
		facc.transfer(sacc);
	cout<<" bal inquire "<<endl;
		facc.balance();
		sacc.balance();
}
