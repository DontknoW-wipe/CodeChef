#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string s;
    cin>>s;
    char d,f;
    int max1=0;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(max1==0)
        {
            c++;
            max1=1;
            d=s[i];
            f=s[i];
        }
        else{
            if(s[i]==d)
            {
                c++;
            }
            else{
                // cout<<c<<" "<<d<<endl;
                if(c>max1)
                {
                    max1=c;
                    f=d;
                }
                d=s[i];
                c=1;
            }
        }
    }
    // cout<<c<<" "<<d<<endl;
    if(c>max1)
    {
        max1=c;
        f=d;
    }
    // cout<<endl;
    cout<<max1<<" "<<f<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
