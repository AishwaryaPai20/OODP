#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char data[100];
    ofstream outfile;
    //open a file in write mode
    outfile.open("afile.dat");
    cout<<"Writing to the file"<<endl;
    cout<<"Enter your name"<<endl;
    cin.getline(data,100);
    //writing data into the file
    outfile<<data<<endl;
    cout<<"Enter your age"<<endl;
    cin>>data;
    outfile<<data<<endl;
    //close the opened file
    outfile.close();
    //open a file in read mode
    ifstream infile(data);
    infile.open("afile.dat");
    cout<<"Reading from the file "<<endl;
    infile>>data;
    //write the data on the screen
    cout<<data<<endl;
    //read the second input
    infile>>data;
    cout<<data<<endl;
    infile.close();
    return 0;
}