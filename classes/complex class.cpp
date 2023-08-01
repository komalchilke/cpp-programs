#include<iostream>
using namespace std;
class complex
{
private :
    double real,img;
public :
    complex ()
    {
        real = 0;
        img = 0;
    }
    complex (double r, double i)
    {
       real = r;
       img = i;
    }
    complex add(complex ob)
    {
        complex temp;
        temp.real= this->real+ob.real;
        temp.img = this->img+ob.img;
        return temp;
    }
    void show()
    {
       cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    complex c1(3,5);
    complex c2(7,8);
    complex c3;
    c3=c1.add(c2);
    c3.show();
    return 0;
}
