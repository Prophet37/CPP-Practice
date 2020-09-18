#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int f,b,fd,bd,t;
    cin>>f>>b>>fd>>bd>>t;
    bd=-bd;
    int sum=0,ans=0,forw=0,back=0;
    if(f==b && fd>f){
        cout<<"No";
        return 0;
    }
    else{
    while(1)
    {
     sum+=f;
        ans+=f;
        if(sum>=fd)
        {
          forw=1;
              break;
        }
    sum-=b;
        ans+=b;
        if(sum<=bd)
        {
           back=1;
            break;
        }
    }
        if(forw==1)
        {
            if(sum==fd){
                t=t*ans;
                }
            else{
                ans=ans-(sum-fd);
                t=t*ans;
            }
            cout<<'A'<<' '<<t;
        }
          if(back==1)
        {
            if(sum==bd){
                t=t*ans;
                }
            else{
                ans=ans+(sum-bd);
                t=t*ans;
            }
            cout<<'B'<<' '<<t;
        }
        
        
    }

    return 0;
}
