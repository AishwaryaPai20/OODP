#include<iostream>
using namespace std;

class Complex
{
    private:
    int real,imag;
    public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r,int i)
    {
        real=r;imag=i;
    }
    void print()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    //operator overloading synatx
    // returntype classname operator +(Argument)
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = real+ c.real;   // real is for c1 and c.real is for c2 c2 is added to c1 and stored in c1
        temp.imag = imag+ c.imag;
        return temp;
    }
};
int main()
{
    Complex C1(5,4);
    Complex C2(2,3);
    Complex C3;  
    C3=C1+C2;  //here it is user defined so i need to overload the operator
    //C3=C1.add(C2)
    return 0;
}