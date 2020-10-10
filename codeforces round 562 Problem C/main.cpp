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


    for(int i = 0; i<x-1; i++)
    {
        if(a[i]>a[i+1])
        {
            cout<< "1";
            return 0;
        }
    }

    cout<< "0";
    return 0;

//    int count = 0;
//    int newnum;
//
//    for(int i = 0; i<x-1; i++)
//    {
//        if(a[i]> a[i+1])
//        {
//            newnum = (a[i+1]+1)%y;
//            if(a[i+1] == newnum)
//            {
//                continue;
//            }
//
//        }
//        count = count + 1;
//    }
//
//    cout<< count;
}
