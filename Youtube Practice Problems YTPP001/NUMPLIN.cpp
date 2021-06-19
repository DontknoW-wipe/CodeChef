#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 	
}
int main()
{	speed_karo
    int n;
    cin>>n;
    int sum=0;
    int g=n;
    while(g>0)
    {
        sum=(sum*10)+(g%10);
        g=g/10;
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
