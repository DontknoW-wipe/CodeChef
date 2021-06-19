#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(int a1,int a2,int n,int c)
{
    if(c==n)
    {
        return;
    }
    cout<<a1*10<<" ";
    c++;
    if(c==n)
    {
        return;
    }
    cout<<a2*2<<" ";
    c++;
    a1++;
    a2++;
    solve(a1,a2,n,c);
}
int main()
{	speed_karo
    int n;
    cin>>n;
    int c=0;
    solve(1,1,n,c);
    return 0;
}
