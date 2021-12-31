#include<iostream>
using namespace std;

class Weight
{
    private:
    int kg;
    public:
    Weight()
    {
        kg=0;
    }
    Weight(int x)
    {
        kg=x;
    }
    void printWeight()
    {
        cout<<"Weight in kg "<<kg<<endl;
    }
    //operator overloading synatx
    // returntype classname operator +(Argument)
    Weight operator ++()  //return type being weight returns the value in main
    {
        Weight temp;
        temp.kg=++kg;
        return temp;
        
    }
    void operator ++(int)
    {
        kg++;
    }
    void operator --()
    {
        --kg;
    }
    void operator --(int)
    {
        kg--;
    }
};
int main()
{
    // Weight obj;
    // obj.printWeight();  
    // ++obj;           //pre
    // obj.printWeight();
    // obj++;          //post
    // obj.printWeight();
    // --obj;           //pre
    // obj.printWeight();
    // obj--;          //post
    // obj.printWeight();

    Weight obj1,obj2;
    obj2 = ++obj1; 
    obj2.printWeight(); //shows error because user defined no equal to so we need to create operatot overloading in ++ 
    return 0;
}