#include <iostream>
#include <bitset>
using namespace std;
int main(){
	int i,j;
	i=10;
	j=i<<1;
	cout<<i<<"=>"<< bitset<32>(i)<<endl;
	cout<<j<<"=>"<<bitset<32>(j)<<endl;
	return 0;
}
