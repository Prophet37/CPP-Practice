#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isvowel(char c)
{
   return (c=='a' || c=='A' || c=='e' || 
            c=='E' || c=='i' || c=='I' || 
            c=='o' || c=='O' || c=='u' || 
            c=='U');
}

string reverse_swap(string str)
{
    int i=0,j=0;
    string vowel;
    // We are storing the vowels in a string called vowel
    for(i=0;str[i]!='\0';i++)
    {
        if(isvowel(str[i]))
        {
            vowel[j++]=str[i];
        }
    }
    //Now running the loop again, we will put the values of vowel from the end to be placed in the string str
    for(i=0;str[i]!='\0';i++)
    {
        if(isvowel(str[i]))
        {
            str[i]=vowel[--j];
        }
    }
    return str;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a,b;
    cin>>a;
    b=reverse_swap(a);
    cout<<b;
    return 0;
}
