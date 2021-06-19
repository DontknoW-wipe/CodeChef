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
    if (n <= 1){
        cout<<0<<endl;
        return 0;
    }
        
    if (n <= 3)
    {
        cout<<0<<endl;
        return 0;
    }
    if(n%2==0||n%3==0)
    {
        cout<<0<<endl;
        return 0;
    }
 
    for(int i=5;i*i<=n;i=i+6)
    {
        if (n%i==0||n%(i+2)==0)
        {
            cout<<0<<endl;
            return 0;
        }
    }
    cout<<1<<endl;
    return 0;
}
