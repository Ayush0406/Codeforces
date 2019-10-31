#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    cin>>x;
    map<string, string> mapi;

    string a, b;
    for(int i = 0; i< x; i++)
    {
        cin>>a>>b;
        mapi[b] = a;
        if(mapi.find(a) != mapi.end())
            mapi[b] = mapi[a], mapi.erase(a);
    }

    cout<<mapi.size()<<'\n';
    for(auto [b,a] : mapi)
        cout<<a<<" "<< b<< '\n';
    return 0;


}
