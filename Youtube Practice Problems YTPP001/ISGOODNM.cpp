#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 	
}
int main()
{	speed_karo
    ll n;
    cin>>n;
    ll sum=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            sum+=i;
            // cout<<i<<" ";
            if(n/i!=i)
            {
                if(n/i==n)
                {
                    continue;
                }
                sum+=(n/i);
                // cout<<n/i<<"  ";
            }
        }
    }
    if(sum==n)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
