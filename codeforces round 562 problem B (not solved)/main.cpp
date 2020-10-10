#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,n,m;

}

//int main()
//{
//    int x,y,n,m;
//    cin>>n>>m;
//
//    int a[m];
//    int b[m];
//
//    for(int i = 0; i<m; i++)
//    {
//        cin>>a[i]>>b[i];
//    }
//
//    int flagx = 0;
//    int flagy = 0;
//
//    int notfound = 0;
//
//    for(int i = 0; i< m; i++)
//    {
//        notfound = 0;
//        for(int j = 0; j< m; j++)
//        {
//            if(a[i] != a[j] && a[i]!=b[j])
//            {
//                notfound = 1;
//                break;
//            }
//        }
//        if(notfound == 0 && flagx == 0)
//        {
//            flagx = 1;
//        }
//        if((notfound == 0) && (flagx == 1) && (flagy == 0))
//        {
//            flagy = 1;
//        }
//        if(flagx==1 && flagy==1)
//        {
//            cout<< "YES";
//            return 0;
//        }
//    }
//
//    for(int i = 0; i< m; i++)
//    {
//        notfound = 0;
//        for(int j = 0; j< m; j++)
//        {
//            if(b[i] != a[j] && b[i]!=b[j])
//            {
//                notfound = 1;
//                break;
//            }
//        }
//        if(notfound == 0 && flagx == 0)
//        {
//            flagx = 1;
//        }
//        if(notfound == 0 && flagx == 1 && flagy == 0)
//        {
//            flagy = 1;
//        }
//        if(flagx==1 && flagy == 1)
//        {
//            cout<< "YES";
//            return 0;
//        }
//    }
//
//    cout<< "NO";
//    return 0;
//}
