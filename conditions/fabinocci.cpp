#include <iostream>
using namespace std;
int main() {
	int p=0,n=1,num,x,i;
	cout<<"no of items :"<<endl;
	cin>>num;

	while(i<=num){
		x= (p+n);
		cout<<x<<" "<<endl;
		p=n;
		n = x;
		i++;
	}
	cout<<"sum is "<<x;
	return 0;
}
