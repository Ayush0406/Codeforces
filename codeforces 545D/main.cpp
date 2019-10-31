#include <bits/stdc++.h>

using namespace std;

//Hint: If a person is not satisfied, we put him at last because he can never be satisfied because he doesn't add any value.
//he just adds to time which is not required. That time can be used to satisfy other costumers.

int main()
{
    long long int x;
    cin>>x;
    long long int arr[x];
    for(int i = 0; i < x; i++)
    {
        cin>> arr[i];
    }

    sort(arr, arr+x);
    long long int sum = 0;
    long long int count = 0;

    for(long long int  i = 0 ; i< x; i++)
    {
//        sum = 0;
//        for(long long int j = 0; j<i; j++)
//        {
//            sum = sum + arr[j];
//        }
//
//        if(sum <= arr[i])
//        {
//            count++;
//        }

          if(sum <= arr[i])
          {
              count++;
              sum = sum + arr[i];
          }
          else
          {

          }
    }

    cout<< count;
}
