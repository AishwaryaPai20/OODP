//function overloading where two or more functions an have same name but different parameters
//if derived class defined the same function as defined in its base class known as the function overriding
//the object created for both classes base and derived then the member function of derived class is invoked and function of base is ignored

#include<iostream>
using namespace std;

class Animal{
    public:
    void makeSound()
    {
        cout<<"Animal sound";
    }
};
class Dog: public Animal{
    public:
    void makeSound()
    {
        cout <<"Dog Barks";
    }
};
class Cat: public Animal{
    public:
    void makeSound()
    {
        cout <<"Cat Meows";
    }
};
int main()
{
    Animal a1;
    a1.makeSound();
    cout<<endl;
    Dog d1;
    d1.makeSound();
    cout<<endl;
    Cat c1;
    c1.makeSound();
    cout<<endl;
    return 0;
}