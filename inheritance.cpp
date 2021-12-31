// access-specifier program

#include<iostream>
using namespace std;

class MyBaseClass{
    public:
        int x;
    MyBaseClass()
    {
        x=5;
        y=5;
        z=5;
    }
    void printProtectedData()
    {
        cout<<"Y :"<<y<<endl;
    }
    protected:
        int y;
    private:
        int z;
};
class MyDerivedClass : public MyBaseClass{
    protected:
        int x;
    protected:
        int y;
}
class MyDerivedClass : protected MyBaseClass{
    private:
        int x;
    private:
        int y;
}
class MyDerivedClass : private MyBaseClass{
    public:
        int x;
    protected:
        int y;
}
void OutsideFunction(MyBaseClass obj)
{
    // cout<<"X :"<<obj.x<<endl;   // X :5 is printed
    cout<<"Y :"<<obj.x<<endl;  //to access Y function is created inside the public
    // cout<<"Z :"<<obj.x<<endl;
}
int main()
{
    MyBaseClass obj1;
    OutsideFunction(obj1);
    obj1.printProtectedData();
    return 0;
}


// class derived-class: access-specifier base-class

//protected and private program
// #include <iostream>
// using namespace std;

// class Shape
// {
//     protected:
//     int length;
//     int breadth;
//     public:
//     void setLength(int l){ 
//         length = l; 
//         }
//     void setBreadth(int b){
//         breadth=b;
//         }
// };
// class Rectangle: public Shape{
//     public:
//     int getArea(){ return (length*breadth); }
// };

// int main(){
//     Rectangle rect;
//     rect.setLength(10);
//     rect.setBreadth(20);
//     cout<<"Total area is :"<<rect.getArea()<<endl;
//     return 0;
// }



//public is accessible within and outside the class

//private is very restricted and cant be accesible