#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 	
}
int main()
{	speed_karo
    ll n=10000,m;
    cin>>m;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(ll i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for( ll p=i*i;p<=n;p+=i)
            {
                prime[p]=false;
            }
        }
    }
    int c=0;
    for(ll i=2;i<=n;i++)
    {
        if(prime[i])
        {
            cout<<i<<" ";
            c++;
        }
        if(c==m)
        {
            break;
        }
    }
    // cout<<endl;
    // cout<<c<<endl;
    return 0;
}
