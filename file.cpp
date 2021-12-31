// std contains entire c++ standard libraries 

#include<fstream>
using namespace std;

int main()
{
    int a,b,c;
    ifstream fin;
    fin.open("my_input.dat"); //open input file
    fin>>a>>b;
    c=a+b;
    ofstream fout;
    fout.open("my_output.dat"); //open output file
    fout<<c<<endl;
    fin.close();
    fout.close();
}