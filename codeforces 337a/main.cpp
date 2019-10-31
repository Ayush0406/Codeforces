#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin>>x>>y;

    int a[y];

    for(int i = 0; i< y; i++)
    {
        cin>> a[i];
    }

    int mini = 10001;
    int diff;
    sort(a, a+y);

    for(int i = 0; i<y-x+1; i++)
    {
        //cout<< "a[i+x-1]="<< a[i+x-1]<< " a[i] = "<< a[i]<<'\n' ;

        //cout<< *max_element(a+i, a+x+i)<< " "<< *min_element(a+i, a+x+i)<< '\n';
        diff = abs(*max_element(a+i, a+i+x)- *min_element(a+i, a+i+x));
//        cout<< *(a+i+x-1)<< '\n';
        //diff = abs(a[i+x-1] - a[i]);

//        cout<< *max_element(a+i, a+i+x)<< " "<< *min_element(a+i, a+i+x)<< '\n';
        if(diff < mini)
        {
            mini = diff;
        }
    }

    cout<<mini;
}
