//1. Sequence containers
//code for vector
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(vector<int>::iterator i = v.begin(); i != v.end();i++) 
    {
        cout<<*i<<" ";
    }
}

//code for deque
#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    deque<int> dq(a,a+10);
    dq.pop_front();
    dq.pop_back();
    dq.push_front(12);
}

//code for list
#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main()
{
    list<int>l{1,2,3,4,5,6,7,8,9,10};
    l.reverse();
}

//2. Associative containers
//code for map
#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main()
{
    map<int,int>m{{1,2},{2,3},{3,4}};
    //1,2,3 keys correspond to 2,3,4 values
    map<string,int>map1;
    map1["abc"]=123; //insert key="abc" with value=123;
    map1["def"]=456; //insert key="def" with value=456;

    map<char,int>map2(map1.begin(),map1.end());  //copies map1 to map2
}

//4. Container Adapter
//code for queue
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(2);
    q.push(3);
}

//code for priority queue
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>pq;
    pq.push(20);    //pushes 20 top becomes 20
    pq.push(40);    //pushes 40 top becomes 40
    pq.push(90);    //pushes 90 top becomes 90
    pq.push(60);    //pushes 60 top still remains 90
    pq.pop();       //highest number is removed i.e. 90 is removed
}

//code for stack
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
{
    stack<int>s;
    s.push(20);    
    s.push(40);    
    s.push(90);    
    s.push(60);  
    s.pop();
    cout<<s.top();
    cout<<s.size();
}
