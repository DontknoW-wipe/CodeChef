#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int a[5];
 	for(int i=0;i<5;i++)
 	{
 	    cin>>a[i];
 	}
 	sort(a,a+5);
 	cout<<a[2]<<endl;
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
