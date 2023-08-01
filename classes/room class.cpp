#include<iostream>
using namespace std;
class room
{
private :
    float height;
    float lenght;
    float width;
public :
    void measure(float h,float l,float w)
    {
        height=h;
        lenght=l;
        width=w;
    }
    void print()
    {
        cout<<"height "<<height<<" "<<"lenght "<<lenght<<" "<<"width "<<width<<endl;
    }
    void volume()
    {
        float volume;
        volume = height*lenght*width;
        cout<<"volume = "<<volume<<endl;
    }
};
int main()
{
    room r;
    r.measure(3,5,7);
    r.print();
    r.volume();
    return 0;
}
