#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string solve()
{
    int Amin,Bmin,Cmin,Tmin,A,B,C;
    cin>>Amin>>Bmin>>Cmin>>Tmin>>A>>B>>C;
    if(A<Amin||B<Bmin||C<Cmin)
    {
        return "NO";
    }
    if(A+B+C<Tmin)
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
