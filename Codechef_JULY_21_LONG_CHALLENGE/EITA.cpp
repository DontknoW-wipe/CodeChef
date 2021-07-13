#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 	int d,x,y,z;
 	cin>>d>>x>>y>>z;
 	int y1=x*7;
 	int y2=d*y + z*(7-d);
 	cout<<max(y1,y2)<<endl;
}
int main()
{	speed_karo
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
