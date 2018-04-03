/*   ## By Ahror Abdullayev ##   */
#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define ppb pop_back
using namespace std;
int main()
{
    int n;
    cin>>n;
    n++;
    vector<int>v[1005];
    v[0].pb(1);
    v[1].pb(1);
    for (int i=2;i<=n;i++)
    {
        int m=0;
        for(int j=0;j<v[i-1].size();j++)
        {
            if (j<v[i-2].size()) 
            {
                v[i].pb((v[i-2][j]+v[i-1][j]+m)%10); 
                m=(v[i-2][j]+v[i-1][j]+m)/10;
            } else
            {
                v[i].pb((v[i-1][j]+m)%10); 
                m=(v[i-1][j]+m)/10;
            }
        }
        if (m>0) v[i].pb(m);
    }
    for (int i=v[n].size()-1;i>=0;i--) cout<<v[n][i];
    return 0;
}
