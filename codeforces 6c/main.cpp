#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    cin>>x;

    std::vector<int> v(x);
    for(int i = 0; i< x; i++)
    {
        cin>>v[i];
    }

    if(x == 1)
    {
        cout<< "1 0";
        return 0;
    }

    long long sum1 = 0, sum2= 0;

    int first = 0;
    int last = x-1;

    sum1 = v[first];
    sum2 = v[last];

    int count1 = 1;
    int count2 = 1;

    while(first<last)
    {
        if(sum1>sum2)
        {
            if(first == last-1)
            {
                cout<<count1<< " "<< count2;
                return 0;
            }
            last--;
            sum2 = sum2 + v[last];
            count2++;
        }
        else if(sum2 >= sum1)
        {
            if(first+1 == last)
            {
                cout<<count1<< " "<< count2;
                return 0;
            }
            first++;
            sum1 = sum1 + v[first];
            count1++;
        }
    }

    cout<<count1<< " "<< count2;
}
