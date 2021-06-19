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
    int r=-1;
    if(n%3==0)
    {
        r=n/3;
    }
    if(r==-1)
    {
        cout<<r<<endl;
    }
    else if(r%2==0)
    {
        cout<<0<<endl;
    }
    else if(r%2!=0)
    {
        cout<<1<<endl;
    }
   
    return 0;
}
