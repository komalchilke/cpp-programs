#include <iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter the char "<<endl;
	cin>>ch;
	if(ch>=65 && ch<=90){
		cout<<"char is capital ";
	}
	else {
		cout<<"char is not capital ";
	}
	return 0;
}
