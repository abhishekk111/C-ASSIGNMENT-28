#include<iostream>
using namespace std;
class Marks
{
private:
    int mark;
public:
    Marks(int m)
    {
        mark=m;;
    }
    void display()
    {
        cout<<mark<<endl;
    }
    Marks *operator->()
    {
        return this;
    }
};
int main()
{
    Marks m(50);
    cout<<"Marks by dot(.) operator is : ";
    m.display();
    cout<<endl;
    cout<<"Marks by Arrow(->) operator is : ";
    m->display();

    return 0;
}
