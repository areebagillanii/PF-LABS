#include<iostream>

using namespace std;
int main(){
	int age;
	cout <<" enter age ";
	cin>> age;
	(age <13 ) ? cout<<" age "<<age<<"fall unnder the category: child":
	(age>=13 &&age<=19) ?cout <<"age  "<<age<<" fall under the category: teenager":cout<<"age "<<age<<" fall under category: adult";
	 	
return 0;
	
}
