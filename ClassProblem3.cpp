#include<iostream>
using namespace std;

int countrec(int choc,int wrap_ex){
	if(choc<wrap_ex){
		return 0;
	}
	int new_choc= choc/wrap_ex;
	return new_choc+countrec(new_choc+choc%wrap_ex,wrap_ex);
}


int total_choc(int amount,int price, int wrap_ex){
	int choc=amount/price;
	return choc+countrec(choc,wrap_ex);
}

int main(){
	int amount, price, wrap_ex;
	cout<<"Provide me with the appropriate amount you have, price per chocolate, and wrapper exchange value: ";
	cin>>amount>>price>>wrap_ex;

	cout<<"The number of chocolates which can be purchased are: "<<total_choc(amount,price,wrap_ex);
}