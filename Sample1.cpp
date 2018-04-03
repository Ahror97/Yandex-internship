#include <bits/stdc++.h>
using namespace std;
int n;
char a,k[55][55];
vector<int>v[2600];
vector<bool>vis(2600);
map<int,int>mp;
void dfs(int a)
{
     
    mp[a]++;
    vis[a]=1;
    for (int i=0;i<v[a].size();i++)
    {
        if (vis[v[a][i]]==0)
        {
            dfs(v[a][i]);
        }
    }
     
}
int main()
{
    cin>>n;
    for (int i=0;i<=n+1;i++)
    {
        for (int j=0;j<=n+1;j++)
        {
            k[i][j]='#';
        }
    }
     
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cin>>k[i][j];
            if(k[i][j]=='.')
            {
                int a=i*n+j,b=i*n+j-1,c=(i-1)*n+j;
                if (k[i][j-1]=='.') 
                {
                 
                    v[a].push_back(b);
                    v[b].push_back(a);
                }
                if (k[i-1][j]=='.') 
                {
                    v[a].push_back(c);
                    v[c].push_back(a);
                }
            }   
        }
    }
     
    dfs(n+1);
    dfs(n*n+n);
    int ans=0;
    for (int i=1;i<=n+1;i++)
    {
        for (int j=1;j<=n+1;j++)
        {
            if (k[i][j]=='.' && mp[i*n+j]>0)
            {
                if (k[i][j-1]=='#') ans++;
                if (k[i-1][j]=='#') ans++;
            } 
            if (k[i][j]=='#')
            {
                if (k[i][j-1]=='.' && mp[i*n+j-1]>0) ans++;
                if (k[i-1][j]=='.' && mp[(i-1)*n+j]>0) ans++;
            } 
        }
    }
     
    cout<<ans*25-100;
     
    return 0;
}
