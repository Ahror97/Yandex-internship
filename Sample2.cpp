#include <bits/stdc++.h>
#define pb push_back
#define ppb pop_back
using namespace std;
int main()
{
    string s,l;
    cin>>s>>l;
    char ans='=';
    if (s[0]=='-' && l[0]!= '-') cout<<'<'; else
    if (s[0]!='-' && l[0]== '-') cout<<'>'; else
    {
        bool e=0;
        if (s[0]=='-')
        {
            e=1;
             
            s.erase(0,1);
            l.erase(0,1);   
        }
        string s1="",s2="",l1="",l2="";
            int t=0;
            while (s[t]!='.' && t<s.size())
            {
                s1+=s[t];
                t++;
            }
            t++;
            while(t<s.size())
            {
                s2+=s[t];
                t++;
            }
            t=0;
            while (l[t]!='.' && t<l.size())
            {
                l1+=l[t];
                t++;
            }
            t++;
            while(t<l.size())
            {
                l2+=l[t];
                t++;
            }
            if (s1.size()>l1.size()) ans='>'; else
            if (s1.size()<l1.size()) ans='<'; else
            {
                for (int i=0;i<s1.size();i++)
                {
                    if (s1[i]>l1[i])
                    {
                        ans='>';
                        break;
                    } else
                    if (s1[i]<l1[i])
                    {
                        ans='<';
                        break;
                    }   
                }
                if (ans=='=') 
                {
                    while (s2.size()!=l2.size())
                    {
                        if (l2.size()<s2.size()) l2+='0'; else s2+='0'; 
                    }
                    for (int i=0;i<s2.size();i++)
                    {
                        if (s2[i]>l2[i])
                        {
                            ans='>';
                            break;
                        } else
                        if (s2[i]<l2[i])
                        {
                            ans='<';
                            break;
                        }
                    }
                } 
            }
        if (e)
        {
            if (ans=='>') cout<<'<'; else
            if (ans=='<') cout<<'>'; else cout<<'=';
        } else cout<<ans;
         
    }
    return 0;
}
