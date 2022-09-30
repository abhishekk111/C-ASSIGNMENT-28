#include<iostream>
using namespace std;
class Complex
{
  private:
    int a;
    int b;

  public:
      Complex(int r, int i)
    {
        a=r;
        b=i;
    }
    Complex()
    {

    }
      void setData(int r, int i)
      {
          a=r;
          b=i;
      }
      friend ostream & operator<<(ostream &os, Complex &c)
    {
        os<<"Real = "<<c.a<<" Img = "<<c.b<<endl;
        return os;
    }
      Complex & operator=(const Complex &c)
    {
        this->a=c.a;
        this->b=c.b;

        return *this;
    }
};
int main()
{
    Complex c1(2,3);    //also write c1=Complex(3,4)
    Complex c2;
    c2.setData(4,5);
    Complex c3;

    c3=c1=c2;
    cout<<c1<<c2;                       //copy constructor chal rha hai


    return 0;
}

