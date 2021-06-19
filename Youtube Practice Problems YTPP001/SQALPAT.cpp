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
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<sum<<" "<<sum+1<<" "<<sum+2<<" "<<sum+3<<" "<<sum+4<<endl;
        }
        else{
            cout<<sum+4<<" "<<sum+3<<" "<<sum+2<<" "<<sum+1<<" "<<sum<<endl;            
        }
        sum+=5;
    }
    return 0;
}
