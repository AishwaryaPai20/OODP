#include<iostream>
using namespace std;
class Animals{
    public:
    virtual void eat()
    {
        cout<<"I'm eating generic food\n";
    }
};
class Dog: public Animals{
    public:
    void eat()
    {
        cout<<"I'm eating Dog food\n";
    }
};
class Cat: public Animals{
    public:
    void eat()
    {
        cout<<"I'm eating Cat food\n";
    }
};
void function(Animals *xyz)
{
    xyz->eat();
}
int main()
{
    Animals *ptr;
    Cat c1;
    Dog d1;
    ptr=&c1;
    function(ptr);
    ptr=&d1;
    function(ptr);
    return 0;
}


// wothout virtual you will have to define the function thrice to access the derived class


// #include<iostream>
// using namespace std;

// class MyBase
// {
//     public:
//     void show()
//     {
//         cout<<"Base class show function called"<<endl;
//     }
//     virtual void print()
//     {
//         cout<<"Base class print function called"<<endl;
//     }
// };
// class MyDerived: public MyBase
// {
//     void show()
//     {
//         cout<<"Derived class show function called"<<endl;
//     }
//     void print()
//     {
//         cout<<"Derived class print function called"<<endl;
//     }
// };
// int main()
// {
//     MyBase *baseptr;
//     MyDerived derived;
//     baseptr=&derived;
//     baseptr->print();
//     baseptr->show();
// }

// Output
// Derived class print function called (because virtual is used)
// Base class show function called