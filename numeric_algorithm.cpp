//IOTA method

#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
#include<random>
using namespace std;

int main()
{
    vector<int> v(10);
    //v is 0 0 0 0 0 0 0 0 0 0 
    iota(v.begin(), v.end(),10);
    //v is 10 11 12 13 14 15 16 17 18 19
    cout<<"Elements are \n";
    for(auto i: v) std::cout<<*i<<' ';
}