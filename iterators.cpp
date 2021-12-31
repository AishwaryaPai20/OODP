#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>:: iterator it;
    //creates an iterator name to a vector of integer 
    vector<string>::iterator s;
    //creates an iterator name to a vector of strings
    list<int>::iterator k;
    //creates an iterator k to a list of integers
    map<int,int>::iterator l;
    //creates an iterator l to a map of integers
}

//advance operation on iterator 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v(10);
    vector<int>::iterator it;
    it=v.begin();
    advance(it,5);  //points to the fifth element
    advance(it,-1); //points to the fourth element now
}

//distance operation on iterator 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v(10);
    vector<int>::iterator i,j;
    i=v.begin();
    j=v.end();
    cout<<distance(i,j);   //prints 10
}

//Function objects in stl
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Functor
{
    public:
    int operator()(int a,int b)
    {
        return a<b;
    }
};
int main()
{
    Functor F;
    int a=7;
    int b=5;
    int ans=F(a,b);
    cout<<ans;  
}