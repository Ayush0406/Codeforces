#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    int a[500] = {0};

    a[0] = 2;
    a[1] = 3;
    int k = 2;

    cin >> x;
    int notprime = 0;
    for(int i = 5; i <= x; i = i+2)
    {
        notprime = 0;
        for(int j = 3; j<=sqrt(i); j = j+2)
        {
            if(i%j == 0)
            {
                notprime =  1;
                break;
            }
        }
//        cout<<'\n'<< "i = "<< i << " notprime = "<<  notprime;
        if(notprime == 1)
        {
            continue;
        }
        a[k] = i;
        k = k +1;
    }
//
//    for(int i = 0; a[i] != 0; i++)
//    {
//        cout<< '\n'<< a[i];
//    }

    int y;
    cin>>y;
    if(y == 0)
    {
        cout<< "YES";
        return 0;
    }
    int count = 0;
    int nolbach = 0;

    for(int i = 4; a[i] != 0; i++)
    {
        nolbach = 0;
        for(int j = 0; j < i-1; j++)
        {
            if(a[i] == (a[j] + a[j+1] + 1))
            {
                nolbach = 1;
                break;
            }
        }
        if(nolbach == 1)
        {
            count = count + 1;
            if(count == y)
            {
                cout<< "YES";
                return 0;
            }
            continue;
        }
    }

    cout<< "NO";
}
