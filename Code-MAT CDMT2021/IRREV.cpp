#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b); 
}
string solve()
{
    int p,q;
    cin>>p>>q;
    int gcD=gcd(p,q);
    if(gcD>1)
    {
        return "NO";
    }
    return "YES";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
