#include<iostream>
using namespace std;
int main(){
	float num1,num2;
	char op;
	//enter user input
	cout<<"enter first number";
	cin>>num1;
	cout<<"enter an operator(+,-,*,/)";
	cin>>op;
	cout<<"enter second number";
	cin>>num2;
	switch(op){
		case'+':
	cout<<"result"<<num1+num2<<endl;
	break;
	    case'-':
		cout<<"result"<<num1-num2<<endl;
		break;
		case'*':
		cout<<"result"<<num1*num2<<endl;
		break;
		case'/':
		cout<<"result"<<num1/num2<<endl;
		break;
		default:
		cout<<"error:invalid operator entered"<<endl;
						}
			return 0;
}
