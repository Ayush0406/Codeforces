#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    char a,b;
    cin>>b;
    int count = 0;
    for(int i = 0 ; i< x-1; i++)
    {
        cin>>a;
        if(a == b)
        {
            count = count + 1;
        }
        b=a;
    }
    cout<<count;
}
