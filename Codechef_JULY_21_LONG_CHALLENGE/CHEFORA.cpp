#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
ll findCheforaNumber(ll n)
{
    ll chefNum=n;
    ll res=0;
    if(n<10)
    {
        res=chefNum;
    }
    else if(n>=10){
        n/=10;
        while(n!=0)
        {
            chefNum=chefNum*10+n%10;
            n/=10;
        }
        return chefNum;
    }
    return res;
}
ll Result(ll a,ll b)
{
    ll res=1;
    while(b!=0)
    {
        if(b%2==0)
        {
            a=((a%mod)*(a%mod))%mod;
            b=b/2;
        }
        else{
            res=((res%mod)*(a%mod))%mod;
            b=b-1;
        }
    }
    return res;
}
void solve(ll a1[],ll a2[])
{
 	ll l,r;
 	cin>>l>>r;
 	ll k=a2[r]-a2[l];
 	cout<<Result(a1[l],k)<<endl;
}
int main()
{	speed_karo
    ll a1[100001]={0},a2[100001]={0};
    for(ll i=0;i<100001;i++)
    {
        a1[i]=findCheforaNumber(i);
        a2[i]=a2[i-1]+a1[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        solve(a1,a2);
    }
    return 0;
}
