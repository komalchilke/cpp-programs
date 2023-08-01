#include<iostream>
using namespace std;

class student
{
private:
    string name;
    float math,eng,sci,average;
public:
    void setname(string n)
    {
        name=n;
    }
    void setmath(int m)
    {
        math=m;
    }
    void seteng(int e)
    {
        eng=e;
    }
    void setsci(int s)
    {
        sci=s;
    }
    string getname()
    {
        return name;
    }
    int getmath()
    {
        return math;
    }
    int geteng()
    {
        return eng;
    }
    int getsci()
    {
        return sci;
    }
    float getaverage()
    {
        return ((math+eng+sci)/3);
    }
    int gettotal()
    {
    	return (math+eng+sci);
	}
};
int main()
{
    string n;
    int m,e,sc;
    student s[3];
     cout<<"enter student data  :"<<endl;
        cout<<"NAME    MATH    ENGLISH    SCIENCE"<<endl;
    for(int i=0; i<2; i++)
    {
        cin>>n>>m>>e>>sc;
        s[i].setname(n);
        s[i].setmath(m);
        s[i].seteng(e);
        s[i].setsci(sc);
    }
    cout<<"student data is:*****"<<endl;
    for(int i=0; i<2; i++)
    {
        cout<<"NAME     MATH     ENGLISH     SCIENCE    total    average"<<endl;

        cout<<s[i].getname()<<"    "<<s[i].getmath()<<"    "<<s[i].geteng()<<"    "<<s[i].getsci()<<"    "<<s[i].gettotal()<<"    "<<s[i].getaverage()<<endl;
    }
    return 0;
}
