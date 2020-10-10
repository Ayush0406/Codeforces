#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> stak;
    stack <int> que;
    int x;
    cin>>x;
    for(int i = 0; i< x; i++)
    {
        int a;
        cin>>a;
        for(int i = 0; i < a; i++)
        {
            int b;
            cin>>b;
            stak.push(b);
        }

        if(stak.empty())
        {
            cout<< "-1";
            break;
        }

        int m = stak.top();
        stak.pop();
        int flag = 0;

        if(stak.empty())
        {
            cout<< "-1";
            break;
        }

        while(!stak.empty())
        {
            int n =  stak.top();
            stak.pop();
            if(n>m)
            {
                que.push(m);
            }
            if(n<m)
            {
                stak.push(m);
                que.push(n);

                int arrsize = que.size();
                int arr[arrsize];
                int h;
                for(int i = 0 ; i<arrsize; i++)
                {
                    h = que.top();
                    que.pop();
                    arr[i] = h;
                }
                sort(arr, arr + arrsize);

                stack <int> stakk;
                while(!stak.empty())
                {
                    stakk.push(stak.top());
                    stak.pop();
                }

                while(!stakk.empty())
                {
                    cout<<stakk.top();
                    stakk.pop();
                }
                for(int i = 0; i < arrsize; i++)
                {
                    cout<< arr[i];
                }

            }
            m = n;
        }






    }
}
