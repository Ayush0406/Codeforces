#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin>>x>>y;

    int a[x];

    for(int i = 0; i<x; i++)
    {
        cin>>a[i];
    }

    int count = 0;

    while(!is_sorted(a, a+x))
    {
        count = count + 1;
        int num2;
        for(int i = 0; i < x-1; i++)
        {
            if(a[i] <= a[i+1])
            {
                continue;
            }
            else
            {
                if(((a[i+1]+1)%y) < a[i] )
                {
                    a[i] = (a[i]+1)%y;
                }
                else{
                    a[i+1] = (a[i+1]+1)%y;
                }
            }

        }
    }

    cout<< count;


}
