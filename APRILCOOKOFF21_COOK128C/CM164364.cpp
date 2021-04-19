#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int solve()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int> mp;
    map<int,int> ::iterator it;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    priority_queue<int> pq;
    for(it=mp.begin();it!=mp.end();it++)
    {
        pq.push(it->second);
    }

    while(x>0)
    {
        int tmp=pq.top();
        pq.pop();
        tmp--;
        if(tmp>0){
            pq.push(tmp);
        }
        x--;
    }
    int sum=0;
    while(!pq.empty())
    {
        int data=pq.top();
        pq.pop();
        if(data>0)
        {
            sum++;
        }
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
