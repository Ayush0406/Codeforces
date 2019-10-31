#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int a[m];
    int b[m];

    for(int i = 0; i< m; i++)
    {
        cin>>a[i]>>b[i];
    }

    int x = a[0];

    int xcount = 1;

    int arr[n+1] = {0};

    for(int i = 1; i<m; i++)
    {
        if(a[i] == x || b[i]==x)
        {
            xcount++;
            continue;
        }
        else
        {
            arr[a[i]] = arr[a[i]] + 1;
            arr[b[i]] = arr[b[i]] + 1;
        }
    }

//    cout<< "arr = ";
//    for(int i = 1; i <= n; i++)
//    {
//        cout<< arr[i]<< " ";
//    }
//
    int req = m - xcount;
//    cout<< '\n'<< "req= "<< req<<'\n';

    for(int i = 1; i<= n; i++)
    {
        if(arr[i] == req)
        {
            cout<<"YES";
            return 0;
        }
    }

    x = b[0];
    xcount = 1;
    int arr2[n+1] = {0};



    for(int i = 1; i < m; i++)
    {
        if(a[i] == x || b[i]==x)
        {
            xcount++;
            continue;
        }
        else
        {
            arr2[a[i]] = arr2[a[i]] + 1;
            arr2[b[i]] = arr2[b[i]] + 1;
        }
    }

    req = m - xcount;

//     cout<< '\n'<< "req= "<< req<<'\n';
//
//    cout<< '\n' << "arr2 = ";
//    for(int i = 1; i<=n; i++)
//    {
//        cout<< arr2[i]<< " ";
//    }


    for(int i = 1; i<=n; i++)
    {
        if(arr2[i] == req)
        {
            cout<<"YES";
            return 0;
        }
    }



    cout<< "NO";




}
