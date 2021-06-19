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
    vector<int> x;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        x.push_back(y);
    
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return 0;
}
