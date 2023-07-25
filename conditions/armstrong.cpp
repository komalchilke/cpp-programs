#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	cout<<"enter 3 digit no :"<<endl;
	cin>>a;
	b=a%10;
	c=a/10;
	d=c%10;
	e=a/100;
	f=(b*b*b+d*d*d+e*e*e);
	if(f==a){
		cout<<"Armstrong no."<<endl;
	}
	else {
		cout<<"not armstrong no."<<endl;
	}
	return 0;
}
