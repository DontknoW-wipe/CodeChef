#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 	int n; 
 	cin>>n;
    int a[n];
    int maxE=INT_MAX;
    map<int,int> f;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxE=min(maxE,a[i]);
        f[a[i]]++;
    }
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=maxE and a[i]%(a[i]-maxE)!=maxE){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<n-f[0]<<endl;
    } else{
        cout<<n-f[maxE]<<endl;
    }
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
