#include<iostream>
using namespace std;
class tickets
{
private:
    string departure;
    string arrival;
    int flightno;
    char ch;
    int seat;
public:
    void setdept(string d)
    {
       departure = d;
    }
    void setarri(string a)
    {
        arrival = a;
    }
    void setflightno(int fn)
    {
        flightno = fn;
    }
    void setseat(int s)
    {
        seat = s;
    }
    void setch(char c)
    {
        ch = c;
    }
    string getdept()
    {
         return departure;
    }
    string getarri()
    {
        return arrival;
    }
    int getfn()
    {
        return flightno;
    }
    int getseat()
    {
        return seat;
    }
    char getch()
    {
        return ch;
    }
};
int main()
{
    tickets t1;
    t1.setdept("nagpur");
    t1.setarri("pune");
    t1.setflightno(2);
    t1.setseat(15);
    t1.setch('A');
    cout<<t1.getdept()<<" "<<t1.getarri()<<" "<<t1.getfn()<<" "<<t1.getseat()<<t1.getch()<<endl;
    cout<<"  "<<endl;
    tickets t2;
    t2.setdept("hyd");
    t2.setarri("goa");
    t2.setflightno(3);
    t2.setseat(11);
    t2.setch('F');
    cout<<t2.getdept()<<" "<<t2.getarri()<<" "<<t2.getfn()<<" "<<t2.getseat()<<t2.getch()<<endl;
    return 0;
}
