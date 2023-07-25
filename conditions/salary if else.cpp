#include <iostream>
using namespace std;
int main(){
	float bs,hra,da,total;
	cout<<"enter basic salary "<<endl;
	cin>>bs;
	if(bs<=10000){
		hra=bs*0.2;
		da=bs*0.8;
		total=bs+hra+da;
	}
	else if(bs<=20000){
		hra=bs*0.25;
		da=bs*0.9;
		total=bs+hra+da;
	}
	else {
		hra=bs*0.3;
		da=bs*0.95;
		total=bs+hra+da;
	}
	cout<<"total salary is :"<<total<<endl;
	return 0;
}
