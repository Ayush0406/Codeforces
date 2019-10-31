#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x;
    cin>>x;

    vector<long long> vect;

    long long a;
    for(long long i = 0; i< x; i++)
    {
        cin>>a;
        vect.push_back(a);
    }

    long long maxi =  *max_element(vect.begin(), vect.end());

    //cout<< "maxi = "<< maxi;

    long long root = sqrt(maxi);

    vector<long long> arr(1000001, 0);


//    vector<long long> vect2;

    int flag = 0;
    for(long long i = 2; i<= root ; i++)
    {
        flag = 0;
        for(long long j = 2; j*j <= i; j++)
        {
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            arr[i] = i*i;
        }
    }

//    cout<< "value: "<<arr[sqrt(999966000289)];


    int rooti;
    for(long long int i =0; i<vect.size(); i++)
    {
        rooti = sqrt(vect[i]);

        //cout<< '\n' << "rooti = "<< rooti;
        if(arr[rooti] == vect[i])
        {
            cout<< "YES"<< '\n';
        }
        else
        {
            cout<< "NO"<<'\n';
        }

    }



}
