#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int solve()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int> mp;
    for(int i=0;i<m;i++)
    {
        mp[a[i]]++;
    }
    int maxE=0;
    for(int i=0,j=m;j<n;j++,i++)
    {
        if(mp.size()==m)
        {
            return m;
        }
        else
        {
            if(mp.size()>maxE)
            {
                maxE=mp.size();
            }
        }
        if(mp[a[i]]>1)
        {
            mp[a[i]]--;
        }
        else if(mp[a[i]]==1)
        {
            mp.erase(a[i]);
        }
        mp[a[j]]++;
    }
    return maxE;
}
int main()
{
    cout<<solve()<<endl;
    return 0;
}
