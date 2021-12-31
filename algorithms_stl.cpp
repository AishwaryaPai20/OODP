//sorting algorithm stl
#include<iostream>
#include<algorithm>
using namespace std;

void show(int a[])
{
    for(int i=0;i<10;i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int a[10]={1,3,56,34,20,90,12,23,38,89};
    cout<<"The array before sorting \n";
    show(a);
    sort(a,a+10);
    cout<<"The array after sorting \n";
    show(a);
    return 0;
}

//searching algorithm stl
#include<iostream>
#include<algorithm>
using namespace std;

void show(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int a[]={1,3,56,34,20,90,12,23,38,89};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<"The array is \n";
    show(a,size);
    //sort the array for binary search
    sort(a,a+size);
    cout<<"The array after sorting \n";
    show(a,size);
    if(binary_search(a,a+size,56))
    cout<<"Element found";
    else
    cout<<"Element not found";
    return 0;
}

//non modifying algorithms

//count functions 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a[]={1,3,56,34,20,90,12,23,38,89};
    int count_5=count(a,a+10,5);
    vector<int>v(a,a+10);
    int count_1=count(v.begin(),v.end(),1);
    return 0;
}

//modifying algorithms

//copy methods
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1,v2;
    v1.push(2);
    v1.push(4);
    v1.push(6);
    v1.push(8);
    copy(v1.begin(),v1.end(),v2.begin());
    return 0;
}

