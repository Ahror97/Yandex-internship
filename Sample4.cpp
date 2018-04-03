#include <stdio.h>
#include <algorithm>
#define pb push_back
#define ppb pop_back
#define ll long long 
using namespace std;
int main()
{
    ll int n,a,b,c;
     
     
    ll int min1,min2,max1,max2,max3;
    scanf("%lld %lld %lld %lld",&n,&a,&b,&c);
    max1=max(a,max(b,c));
    max3=min(a,min(b,c));
    max2=a+b+c-max1-max3;
     
    min1=max3;
    min2=max2;
     
     
    for (int i=3;i<n;i++) 
    {
        scanf("%lld",&a);
        if (a>=max1) 
        {
            max3=max2;
            max2=max1;
            max1=a; 
        }else
        if (a>=max2) 
        {
            max3=max2;
            max2=a;
        } else
        if (a>=max3) max3=a;
         
        if (a<=min1) 
        {
            min2=min1;
            min1=a;
        } else
        if (a<=min2) min2=a;
    }
     
    if (max1*max2*max3>min1*min2*max1) printf("%lld",max1*max2*max3); else printf("%lld",min1*min2*max1);
    return 0;
}
