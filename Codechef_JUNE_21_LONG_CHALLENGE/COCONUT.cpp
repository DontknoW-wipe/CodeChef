#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int solve()
{
    // return 0;
    int xA,xB,X,Y;
    cin>>xA>>xB>>X>>Y;
    return (X/xA)+(Y/xB);
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
