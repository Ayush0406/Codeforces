#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int arr[5] = {0};
    int a;
    for(int i = 0; i< x; i++)
    {
        cin>>a;
        arr[a]++;
    }

    int ans = 0;
    ans = ans + arr[4] + (arr[2]/2);
    //cout<< "*"<< ans<< '\n';
    if(arr[2]%2 == 1)
    {
        arr[2] = 1;
    }
    else
    {
        arr[2] =0;
    }

    if(arr[3]>=arr[1])
    {
        ans = ans + arr[3]+ arr[2];
        //cout<< "**"<< ans<< '\n';

    }
    else
    {
        ans = ans + arr[3];
        arr[1] = arr[1] - arr[3];
        if(arr[2] == 0)
        {
            if(arr[1] % 4 == 0)
            {
                ans = ans + arr[1]/4;
            }
            else
            {
                ans = ans + arr[1]/4 + 1;
            }
        }
        else
        {
            if(arr[1]<= 2)
            {
                ans = ans + 1;
            }
            else
            {
                if((arr[1]-2)%4 == 0)
                {
                    ans = ans + 1 + ((arr[1]-2)/4);
                }
                else
                {
                    ans = ans + 2 + ((arr[1]-2)/4);
                }
            }
        }
    }

    cout<< ans;

}
