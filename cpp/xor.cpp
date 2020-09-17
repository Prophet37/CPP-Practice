#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char a[100009],b[100009];
    gets(a);
    gets(b);
    int n1=strlen(a),n2=strlen(b);
    if(n1>n2)
    {
        for(int i=0;i<n1-n2;i++)
        {
            cout<<a[i];
        }
        for(int i=n1-n2;i<n1;i++)
        if(a[i]==b[i-(n1-n2)])
            cout<<'0';
        else
            cout<<'1';
    }
        if(n1<n2)
    {
        for(int i=0;i<n2-n1;i++)
        {
            cout<<b[i];
        }
        for(int i=n2-n1;i<n1;i++)
        if(b[i]==a[i-(n1-n2)])
            cout<<'0';
        else
            cout<<'1';
    }
        if(n1==n2)
    {
      
        for(int i=0;i<n1;i++)
        if(a[i]==b[i])
            cout<<'0';
        else
            cout<<'1';
    }
    
    return 0;
}
