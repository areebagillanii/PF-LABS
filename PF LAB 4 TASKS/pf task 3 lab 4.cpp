#include<iostream>
using namespace std;
int main(){
	int account_balance;
	bool loyal;
	cout <<"enter account balance:";
	cin>>account_balance;
	//checking account type
	cout<<"account type:";
	account_balance<100?cout<<"low balance account":(account_balance>=100&& account_balance<=500?cout<<"standard account":cout<<"premium account")<<endl;
	//special offer aligibility
	cout<<" enter 1 for loyal and 0 for not loyal:";
	cin>>loyal;
	account_balance>200&&loyal==1?cout<<"eligible for special offer":cout<<"not eligible";
	return 0;
}
