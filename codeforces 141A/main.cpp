#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b, c;
    cin>>a>>b>>c;
    int arr[256] = {0};
    int lena = a.size();
    int lenb = b.size();
    int lenc = c.size();
    for(int i = 0; i< lena; i++)
    {
        arr[((int)a[i])]++;
    }

    for(int j = 0; j< lenb; j++)
    {
        arr[((int)b[j])]++;
    }

    for(int k = 0; k < lenc ; k++)
    {
        arr[((int)c[k])]--;
    }

    for(int l =0;l<256;l++)
    {
        if(arr[l]!=0)
        {
            cout<< "NO";
            exit(0);
        }
    }

    cout<< "YES";

}
