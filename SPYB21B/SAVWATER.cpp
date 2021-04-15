#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string solve()
{
    int h,x,y,c;
    cin>>h>>x>>y>>c;
    int sum=x+(y/2);
    sum=sum*h;
    if(sum<=c)
    {
        return "YES";
    }
    return "NO";
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
