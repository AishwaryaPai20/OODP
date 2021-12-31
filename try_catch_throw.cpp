//small division program using try catch throw
#include<iostream>
using namespace std;

int main()
{
    int a=10,b=0,c;
    try  //Activates exceptional handling
    {
        if(b==0)
        throw "division by zero is not possible";
        c=a/b;
        cout<<c;
    }
    catch(char const *ex)
    {
        cout<<ex;
    }
}

//using try catch throw divide two numbers by taking input from the user
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,result;
    cout<<"Enter first number "<<endl;
    cin>>n1;
    cout<<"Enter second number "<<endl;
    cin>>n2;
    try  //Activates exceptional handling
    {
        if(n2==0)
        throw n2;
        else 
        {
            result =n1/n2;
            cout<<"The result is "<<result<<endl;
        }
    }
    catch(int x)
    {
        cout<<"Can't divide by "<<x<<endl;
    }
    cout<<"End of program";
}