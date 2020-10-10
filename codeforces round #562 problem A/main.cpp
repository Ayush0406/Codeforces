#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,a,b,n;
    cin>>n>>a>>x>>b>>y;

    if( a==b)
    {
        cout<< "YES";
        return 0;
    }
    for(int i = 0; ; i++)
    {
        if(a==n)
        {
            a=1;
        }
        else{
            a= a+1;
        }
        if(b==1)
        {
            b=n;
        }
        else
        {
            b=b-1;
        }
        if( a==b)
        {
            cout<< "YES";
            return 0;
        }
        else if(a==x || b==y)
        {
            cout<< "NO";
            return 0;
        }


    }
}
