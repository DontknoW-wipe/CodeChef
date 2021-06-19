#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 	
}
ll HF(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return HF(b,a%b);
}
int main()
{	speed_karo
    ll a , b ;
    cin>>a>>b;
    cout<<HF(a,b)<<" "<<(a*b)/HF(a,b)<<endl;
    return 0;
}
