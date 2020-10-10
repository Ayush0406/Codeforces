#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    cin>>y;
    for(int i = 0; i< y ;i++)
    {
        std::string a;
        cin>>a;
        std::string b(a);
        std::reverse(b.begin(), b.end());
        cout<< b<< '\n';

    }
}
