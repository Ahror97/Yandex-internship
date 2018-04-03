#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    freopen ("input.txt","r",stdin);freopen ("output.txt","w",stdout);
    int n;
    double a,b,x,y,q=1,w=1,p,s=0,c=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x>>y;
        if (i==0) {a=x;b=y;w=x;q=y;} else
        {
            w*=y;
            q*=x;
            s+=w;
            c+=q;
            w=x;
            q=y;
        }
    }
    s+=(w*b);
    c+=(q*a);
    double d=(s-c)/2;
    if (d>=0)
    {
    cout.precision(1);
    cout<<fixed<<d;
    }
    else
    {
    cout.precision(1);
    cout<<fixed<<-d;
    }
 
    return 0;
}
