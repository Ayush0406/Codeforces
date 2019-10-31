#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll int n, m;
    cin>>n >> m;
    ll int k = n%m;
    ll int x = n/m;

    ll int kmin = ((((k)*(x+1)*(x))/2) + (((m-k)*x*(x-1))/2));
    ll int kmax = (((n-m+1)*(n-m))/2);

    cout<< kmin<< " "<< kmax;
}
