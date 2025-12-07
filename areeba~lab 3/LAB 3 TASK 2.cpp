#include <iostream>
using namespace std;
int main(){
	//price of items
	float ITEM_1_PRICE=12.95;
	float item_2_price=24.95;
	float item_3_price=6.95;
	float item_4_price=14.95;
	float item_5_price=3.95;
	float subtotal;
	const float sales_tax_rate=6.0/100;
	
	
	cout<<"price of item 1: $"<<ITEM_1_PRICE<<endl;
	cout<<"price of item 2: $"<<item_2_price<<endl;
	cout<<"price of item 3: $"<<item_3_price<<endl;
	cout<<"price of item 4: $"<<item_4_price<<endl;
	cout<<"price of item 5: $"<<item_5_price<<endl;
	//calculating SUBTOTAL
	subtotal=ITEM_1_PRICE+item_2_price+item_3_price+item_4_price+item_5_price;
	cout<<"SUBTOTAL: $"<<subtotal<<endl;
	//SALES TAX 6% OF THE SUBTOTAL
    float sales_tax=sales_tax_rate*subtotal;
	cout<<"SALES TAX (6%) : $"<<sales_tax<<endl; 
	//TOTAL AMOUNT
	cout<<"TOTAL: $"<<subtotal+sales_tax;
return 0;
}
