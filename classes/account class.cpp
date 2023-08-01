#include<iostream>
using namespace std;
class customer
 {
 private :
     string fname;
     string lname;
 public:
    customer ()
    {
        fname = "ramesh";
        lname = "yadav";
    }
    void print()
    {
        cout<<"Fname "<<fname<<endl;
        cout<<"Lname "<<lname<<endl;
    }
};
class account:public customer
{
private :
    int balance;
public:
    void setdata(int b)
    {
        balance = b;
    }
    void showdata()
    {
        print();
        cout<<"balance "<<balance<<endl;
    }
};
int main ()
{
    account a1;
    account a2;
    cout<<"account 1 details :"<<endl;
    a1.setdata(30000);
    a1.showdata();
    cout<<"account 2 details :"<<endl;
    a2.setdata(50000);
    a2.showdata();
    return 0;
}
