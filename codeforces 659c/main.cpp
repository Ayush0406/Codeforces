#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x, money;
    cin>>x;
    cin>>money;

    long long int arr[x];

    for(int i = 0; i< x; i++)
    {
        cin>>arr[i];
    }
    long long int sum = 0;
    long long int last = 0;
    vector <long long int> vect;
    long long int ireq;
    sort(arr, arr+x);
    for(long long int i = 1; ;i++)
    {
//        int flag = 0;
//        for(long long int k = 0; k < x; k++)
//        {
//            if(arr[k] ==  i)
//            {
//                flag = 1;
//                break;
//
//            }
//        }
//        if(flag == 1)
//        {
//            continue;
//        }

if(i == arr[last])
{
    last++;
}
        else
        {
            if(i <= money)
            {
                money = money -i;
                vect.push_back(i);
            }
            else{break;}
        }
    }

    cout<< vect.size()<< '\n';

    for(auto j = vect.begin(); j!=vect.end(); j++)
    {
        cout<< *j<< " ";
    }

}
