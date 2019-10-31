#include <bits/stdc++.h>

using namespace std;

int factorise(int x, std::vector<std::vector<int>> &vect)
{
    for(int i = 1; i* i <= x; i++)
    {
        if(x%i == 0)
        {
            if(i*i == x)
            {
                vect[i].push_back(x);
            }
            else
            {
                vect[i].push_back(x);
                vect[x/i].push_back(x);
            }
        }
    }
    //return vect;
}

int remove(int x, std::vector<std::vector<int>> &vect)
{
    for(int i = 1; i*i<=x; i++)
    {
        if(x%i == 0)
        {
            for(int j = 0 ; j < vect[i].size(); j++)
            {
                if(vect[i][j] == x)
                {
                    vect[i].erase(vect[i].begin()+j);
                }
            }
            int num2 = x/i;
            for(int j = 0; j<vect[num2].size(); j++)
            {
                if(vect[num2][j] == x)
                {
                    vect[num2].erase(vect[num2].begin()+j);
                }
            }
        }
    }
    //return vect;
}

int check(int x, std::vector<std::vector<int>> &vect)
{
    if(x==1)
    {
        return 1;
    }
    if(vect[x].size()>0)
    {
        cout<<"Conflict with "<< vect[x][0]<< '\n';
        return 0;
    }
    for(int i = 2 ; i*i<=x; i++)
    {
        if(x%i == 0)
        {
            if(vect[i].size() > 0)
            {
                cout<< "Conflict with "<< vect[i][0]<< '\n';
                return 0;
            }

            int num2 = x/i;
            if(vect[num2].size() != 0)
            {
                cout<< "Conflict with "<< vect[num2][0]<< '\n';
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n, m;
    cin>>n>>m;

    std::vector<std::vector<int>> vect(n+1);
    std::vector<int> stat(n+1, 0);
    int on = 0;
    int chak = 0;

    char a;
    int b;

    for(int i =  0; i < m ;i++)
    {
        cin>>a>>b;
        if(a == '+')
        {
            if(on == 0)
            {
                on++;
                stat[b] = 1;
                factorise(b, vect);
                cout<< "Success"<< '\n';
                continue;
            }
            if(stat[b] == 0)
            {
                chak = check(b, vect);
                if(chak == 1)
                {
                    on++;
                    factorise(b, vect);
                    stat[b] = 1;
                    cout<<"Success"<< '\n';
                }
                continue;
            }
            else
            {
                cout<< "Already on"<< '\n';
                continue;
            }
        }
        else
        {
            if(stat[b] == 0)
            {
                cout<< "Already off"<< '\n';
                continue;
            }
            else
            {
                on = on -1;
                stat[b] = 0;
                remove(b, vect);
                cout<< "Success"<< '\n';
                continue;
            }
        }
    }
}
