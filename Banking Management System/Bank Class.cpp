
#include <iostream>
using namespace std;

//declaring
class Bank
{
	private:
		char name[12];
		char sname[12];
		char nID[13];
		int phone;
		char email[30];
		char type;
		char pAdrress[40];
		char user[10];
		char passWrd[7];
		float amount, deposit, withdraw;
		
	public:
		void setAmnt ( float m);
		float shwAmnt ();
		//DEPOSIT
		//WITHDRAW
		//`
		
		
};


int main ()
{
	Bank User1;
	
	float money;
	cout << "Hey Enter Amount: $";
	cin >> money;
	User1.setAmnt(money);
	
	
	
	cout <<"This is your Balance: $" << User1.shwAmnt() << endl;
	
	return 0;
}

void Bank::setAmnt(float m)
{
	amount = m;
}

float Bank::shwAmnt()
{
	return	amount;
}
