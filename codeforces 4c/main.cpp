#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
    cin>>x;

    map<string, int> m;

    string s;
    for(int i =0; i<x; i++)
    {
        cin>>s;
        if(m.find(s) != m.end())
        {
            m[s] = m[s] + 1;
            cout<<s<<m[s]<<'\n';
            continue;
        }
        m[s] = 0;
        cout<<"OK"<<'\n';
    }

    for(auto [a,b]:m)
    {
        cout<<a<<" "<< b<<'\n';
    }
}
