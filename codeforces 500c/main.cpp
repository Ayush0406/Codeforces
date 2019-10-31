#include <bits/stdc++.h>

using namespace std;

int checkque(queue<int> que, int x)
{

    while(!que.empty())
    {
        if(x==que.front())
        {
            return 1;
        }
        que.pop();
    }

    return 0;
}

int main()
{
    int x, y;
    cin>>x>>y;
    int a[x], b[y];
    for(int i = 0; i< x; i++)
    {
        cin>>a[i];
    }

    for(int i = 0; i< y; i++)
    {
        cin>>b[i];
    }
    queue<int> myqueue;

    for(int k = 0; k< x; k++)
    {
        int a = checkque(myqueue, b[k]);

        if(a==0)
        {
            myqueue.push(b[k]);
        }
    }

    while(!myqueue.empty())
    {
        cout<< myqueue.front()<<" ";
        myqueue.pop();
    }

}
