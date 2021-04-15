#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int solve()
{
    int n;
    cin>>n;
    int b[n],g[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>g[i];
    }
    sort(b,b+n);
    sort(g,g+n);
    int maxE=INT_MIN;
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        if(b[i]+g[j]>maxE)
        {
            maxE=b[i]+g[j];
        }
    }
    return maxE;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
