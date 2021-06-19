#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 	
}
int main()
{	speed_karo
    int n,k;
    cin>>n>>k;
    int x,y=-1;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==k)
        {
            y=1;
        }
    }
    cout<<y<<endl;
    return 0;
}
