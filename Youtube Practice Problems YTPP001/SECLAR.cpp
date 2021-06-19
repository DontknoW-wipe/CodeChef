#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 	
}
int main()
{	speed_karo
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if((a>b&&a<c)||(a>c&&a<b))
    {
        cout<<a<<endl;
    }
    else if((b>c&&b<a)||(b>a&&b<c))
    {
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
    return 0;
}
