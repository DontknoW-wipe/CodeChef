#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve()
{
   ll x;
   cin>>x;
   if(x<=1)
   {
       return 1;
   }
   ll sum=1;
   for(int i=x;i>=1;i--)
   {
       sum=sum*i;
   }
    return sum;
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
