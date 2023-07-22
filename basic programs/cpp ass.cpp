#include<iostream>
using namespace std;
int main(){
	int i,j;
	//for k =
		for (i=1; i<=5; i++){
		for (j=1;j<=3;j++){
			if(j==1){
				cout<<"*";
			}
			else if(j==2 &&(i==2||i==4)){
				cout<<"*";
			} 
			else if(j==3 &&(i==1||i==5)){
				cout<<"*";
			}
			else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
//for o =
	for (i=1; i<=5; i++){
		for (j=1;j<=5;j++){
		
	if (j==1||j==5||i==1|i==5){
				cout<<"*";
			}
			else {
				cout<<" ";
			}
	}
	cout<<endl;
} 
//for m =
	for (i=1; i<=5; i++){
		for (j=1;j<=5;j++){
			if(j==1||j==5){
				cout<<"*";
			}
			else if(i==j && (j==2||j==3)){
					cout<<"*";
			} 
			else if(i==2 && j==4){
					cout<<"*";
			}
			else {
				cout<<" ";
			}
		}
		cout<<endl;
	} 
	
	// for a =
		for (i=1; i<=5; i++){
		for (j=1;j<=9 ;j++){
			if(i+j==6){
				cout<<"*";
			}
			else if(j>5 && i>1 && j-i==4){
				cout<<"*";
			}
		else if (i==3 && j==5){
				cout<<"*";
		}
			else {
				cout<<" ";
			}
    } 
    cout<<endl;
} 
//for l =
	for (i=1; i<=5; i++){
		for (j=1;j<=5;j++){
			
		if (j==1||i==5){
				cout<<"*";
			}
			else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
		return 0;

}

