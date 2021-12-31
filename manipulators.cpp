#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<setw(10)<<"Hello"<<endl;
    cout<<setw(12)<<setprecision(3)<<2.5555<<endl;
    cout<<hex<<setiosflags(ios::showbase);
    cout<<"Hexadecimal of 84 is "<<84<<endl;
    return 0;
}

//user-defined manipulators

#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

ostream &tab(ostream &o)
{
    o<<"\t";
}
int main()
{
    cout<<1<<tab<<2<<tab<<3;
    //here tab is a user defined manipulator
}