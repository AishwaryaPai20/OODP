#include <bits/stdc++.h>
#include<string> 
using namespace std;
class Attendance
{
    public:
    string name;
    Attendance(){cout<<"No Attendance"<<endl;}
    Attendance stdpst(string studentname)
    {
        name=studentname;
        cout<<"Hello "<<name;
    }
    return 0;
};
int main()
{
    string studentname;
    getline(cin,studentname);
    Attendance stdabs;
    Attendance stdpst(studentname);
	return 0;
}