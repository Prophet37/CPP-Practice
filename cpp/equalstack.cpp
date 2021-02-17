#include <bits/stdc++.h>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    int n1,n2,n3,ma=0,mb=0,mc=0;
    stack <int> a,b,c,a1,b1,c1;
    cin>>n1>>n2>>n3;
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        a.push(x);
        ma+=x;
    }       
    for(int i=0;i<n2;i++)
    {
        int x;
        cin>>x;
        b.push(x);
        mb+=x;
    }       
    for(int i=0;i<n3;i++)
    {
        int x;
        cin>>x;
        c.push(x);
        mc+=x;
    }     
    while(!a.empty())
    {
        a1.push(a.top());
        a.pop();
    } 
     while(!b.empty())
    {
        b1.push(b.top());
        b.pop();
    } 
     while(!c.empty())
    {
        c1.push(c.top());
        c.pop();
    }  
    while(ma!=mb || mb!=mc)
    {
        if(ma>=mb && ma>=mc)
        {
            ma-=a1.top();
          a1.pop();  
        }
         else if(mb>=ma && mb>=mc)
        {
            mb-=b1.top();
          b1.pop();  
        }
         else if(mc>=mb && mc>=mb)
        {
            mc-=c1.top();
          c1.pop();  
        }
    }
    cout<<ma;
    return 0;
}
