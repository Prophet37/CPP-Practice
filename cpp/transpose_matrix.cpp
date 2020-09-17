#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,n,j;
    cin>>n;
    int mat[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
         cin>>mat[i][j];
        }
       int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
        a[j][i]=mat[i][j];
        }
    for(i=0;i<n;i++)
    {    for(j=0;j<n;j++)
        {
         cout<<a[i][j]<<' ';
        }
    cout<<'\n';
    }

    return 0;
}
