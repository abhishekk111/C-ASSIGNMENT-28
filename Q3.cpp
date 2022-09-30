#include<iostream>
using namespace std;
class Array
{
private:
    int a[100];
    const int size=100;
public:
    Array()
    {

    }
    void setArray(int n, int index)
    {
        if(index>=size)
        {
            cout<<"Array Index Out of Bound Exception"<<endl;
            exit(0);
        }
        a[index]=n;
    }
    void display(int index)
    {
        cout<<a[index]<<endl;
    }
    int operator[](int index)
    {
        if(index>=size)
        {
            cout<<"Array Index Out of Bound Exception"<<endl;
            exit(0);
        }
        return a[index];
    }
};
int main()
{
    Array b;
    b.setArray(5,90);
    //b.display(90);
    cout<<b[90];

    return 0;
}
