#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
if(n==1){return 1;}
return factorial(n-1)*n;
}

int main()
{
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << "\n";
    return 0;
}
