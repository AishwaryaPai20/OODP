#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void getArea()=0; //pure virtual function
};
class Circle: public Shape{
    public:
    void getArea()
    {
        cout<<"Enter circle radius "<<endl;
        int r;
        cin>>r;
        cout<<"Area of circle is "<<(3.14*r*r)<<endl;
        //pure virtual function
    }
};
class Rectangle: public Shape{
    public:
    void getArea()
    {
        cout<<"Enter length and breadth to calculate area "<<endl;
        int l,b;
        cin>>l>>b;
        cout<<"Area of rectangle is "<<(l*b);
        //pure virtual function
    }
};
int main(){
    Circle C1;
    C1.getArea();
    Rectangle R1;
    R1.getArea();
}