#include<iostream>
using namespace std;
class Coords3D
{
private:
    int x,y,z;
public:
    Coords3D(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    }
    Coords3D()
    {

    }
    Coords3D operator,(Coords3D c)
    {
        Coords3D t;
        t.x=c.z;
        t.y=c.y;
        t.z=c.x;
        return t;
    }
};
int main()
{
    Coords3D c1(1,2,3);
    Coords3D c2(4,5,6),c3(3,4,5), c4;
    c4=(c1,c2,c3);
    c4.display();
    return 0;

}
