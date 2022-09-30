#include<iostream>
using namespace std;
class Integer
{
private:
    int i;
public:
    Integer(int i):i(i)
    {

    }
    int operator!()
    {
        return -i;   //return !i,+i,etc;
    }
};
int main()
{
    Integer x=10;   //yaha int likha hota Integer ki jagah toh 0 print krta ye advantage hai class ka
    cout<<!x;

    return 0;

}
