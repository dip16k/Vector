#include<iostream>
using namespace std;
class CRADIT;
class DEBIT
{
	int acc;
	float bal;
	public:
		DEBIT()
		{
			acc=0;bal=0;
		}
		void getAmount()
		{
			cout<<"enter acc"<<endl;
				cin>>ac
			cout<<"enter amount to deposite"<<endl;
				cin>>bal;
		}
		void balance()
		{
			cout<<"bal="<<bal;
		}
		void payment(CRADIT &);// pYMENT FUNCTION
		~DEBIT()
		{
			cout<<"debit destructor"<<endl;
		}
};
class CRADIT
{
	float price;
	float payment;
	public:
		void payment_detail()
		{
			price=5000;
			cout<<"payment RS="<<price<<endl;
		//	cin>>payment;
		}
		void chk_pay()
		{
			cout<<"payment="<<payment<<endl;
		}
	friend void DEBIT::payment(CRADIT &);
};
void DEBIT::payment(CRADIT &shop)
{
	float amt;
	cout<<"enter amount to make payment"<<endl;
		cin>>amt;
	if(amt>bal)
		cout<<"insuficient bal"<<endl;
	else if(amt==shop.price)
	{
		bal=bal-amt;
		shop.payment=amt;
	}
	else
	{
		bal=bal-shop.price;
		shop.payment=shop.price;
	}
		
}
main()
{
	DEBIT rs;
	CRADIT price;
		rs.getAmount();
		price.payment_detail();
	rs.payment(price);
		cout<<"checking payemnt detail"<<endl;
		price.chk_pay();
		rs.balance();
}
