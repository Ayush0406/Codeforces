#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;

    int arr[x];
    for(int i = 0; i< x;i++)
    {
        cin>>arr[i];
    }

    int arr2[x];
    for(int i = 0; i< x; i++)
    {
        arr2[i] = arr[i];
    }

    sort(arr2, arr2 + x);

    int start = 0, last=0;
    int flag = 0;

    for( int i = 0; i< x; i++)
    {
        if((arr[i] != arr2[i]) && (flag == 0))
        {
            start = i;
            flag = 1;
        }
        if(arr[i]!= arr2[i])
        {
            last = i;
        }
    }

    int arr3[x];

    if(last == start)
    {
        cout<< "yes"<< '\n'<< start+1<< " "<< last+1;
        exit(0);
    }
    else
    {
        for(int i = 0; i< start; i++)
        {
            arr3[i] = arr[i];
        }
        for(int j = start; j<=last; j++)
        {
            arr3[j] = arr[last - j + start];
        }
        for(int k = last+1; k< x; k++)
        {
            arr3[k] = arr[k];
        }
    }

    for(int i = 0; i< x; i++)
    {
        if(arr3[i]!=arr2[i])
        {
            cout<<"no";
            exit(0);
        }
    }

    cout<< "yes"<< '\n'<< start+1<< " "<< last+1;
}
