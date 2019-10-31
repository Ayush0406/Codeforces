#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int a,b,cap, present;
    cap = 0;
    present =0;

    for(int i = 0 ; i < x; i++)
    {
        cin>>a>>b;
        present = present+b-a;
        if(present>cap)
        {
            cap = present;
        }

    }
    cout<<cap;
}
