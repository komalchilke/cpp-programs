#include <iostream>
using namespace std;
int main(){
	int a,b,c,x;
	cout<<"enter 3 no.s "<<endl;
	cin>>a>>b>>c;
	x = a>b?(b>c?a:b):(b<c?c:b);
	cout<<"max no is :"<<x <<endl;
	return 0;
}
