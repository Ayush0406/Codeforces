#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;

    int y = x;
    int count = 0;
    while(y)
    {
        y = y/10;
        count++;
    }

    int arr[9][count];

    for(int i = 0; i< 9; i++)
    {
        for(int j = 0; j<count; j++)
        {
            arr[i][j] = 0;
        }
    }
    y = x;
    int a;

    int max = 0;
    for(int i = 0; i < count; i++)
    {
        a = y%10;
        y = y/10;

        if(a >  max)
        {
            max = a;
        }

        for(int j = 0 ; j< a; j++)
        {
            arr[j][count-i-1] = 1;
        }
    }
    cout<< max<< '\n';

    int flag = 0;
    for(int i = 8; i>=0; i--)
    {
        flag = 0;
        for(int j = 0; j<count; j++)
        {
            if(arr[i][j]==1)
            {
                flag = 1;
            }
            if(flag == 1)
            {
                cout<< arr[i][j];
            }
        }
        if(flag == 1)
        cout<< " ";
    }
}
