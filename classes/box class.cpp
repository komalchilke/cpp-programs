#include<iostream>
using namespace std;
class box
{
private :
    float height;
    float lenght;
    float width;
public :
    box(float h,float l,float w)
    {
        height=h;
        lenght=l;
        width=w;
    }
    float getheight()
    {
        return height;
    }
    float getlenght()
    {
        return lenght;
    }
    float getwidth()
    {
        return width;
    }
    float getVolume()
    {
        float volume;
        volume = height*lenght*width;
        cout<<"volume = "<<volume<<endl;
    }
   float getArea()
    {
        float area;
        area = (2*height*lenght)+(2*lenght*width)+(2*width*height);
        cout<<"surface area= "<<area<<endl;
    }
};
int main()
{
    box b(3,4,5);
    cout<<"height "<<b.getheight()<<" "<<"lenght "<<b.getlenght()<<" "<<"width "<<b.getwidth()<<endl;
    b.getVolume();
    b.getArea();
    return 0;
}
