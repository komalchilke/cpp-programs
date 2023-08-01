#include<iostream>
using namespace std;

class student
{
private :
    string name;
    int maths;
    int daa;
    int dbms;
    int average;
public :

    void setname(string n)
    {
        name = n;
    }
    void setmaths(int x)
    {
        maths = x;
    }
    void setdaa(int y)
    {
        daa = y;
    }
    void setdbms(int z)
    {
        dbms = z;
    }
    string getname()
    {
        return name;
    }
    int getmaths()
    {
        return maths;
    }
    int getdaa()
    {
        return daa;
    }
    int getdbms()
    {
        return dbms;
    }
    int getaverage()
    {
        return ((maths+daa+dbms)/3);
    }

};
int main()
{
    student s1;
    s1.setname("ram");
    s1.setmaths(98);
    s1.setdaa(95);
    s1.setdbms(92);
    s1.getaverage();
    cout <<"student details"<<endl;
    cout<<"name"<<" "<<"maths"<<" "<<"daa"<<" "<<"dbms"<<" "<<"average"<<endl;
    cout<<s1.getname()<<" "<<s1.getmaths()<<" "<<s1.getdaa()<<" "<<s1.getdbms()<<" "<<s1.getaverage();

    return 0;
}
