#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void array_as_a_hill(int arr[],int n)
{
    int i=0;
    while(i<n && arr[i]<arr[i+1])i++;
        while(i<n && arr[i]==arr[i+1])i++;
        while(i<n && arr[i]>arr[i+1])i++;
    if(i==n-1){
        cout<<"Yes";
    }
    else{cout<<"No";}
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    array_as_a_hill(arr,n);
    return 0;
}