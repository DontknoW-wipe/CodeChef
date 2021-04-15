/*
  score : 10/100
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
void solve(bool prime[])
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n],p[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&p[i]);
        // cout<<p[i]<<" ";
    }
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            v.push_back(a[i]*a[j]);
        }
    }
    // cout<<"games1"<<endl;
    for(int i=0;i<m;i++)
    {
        int y=p[i];
        if(prime[y]!=true)
        {
            continue;
        }
        else{
            int c=0;
            int start=0,end=v.size()-1;
            while(start<=end)    
            {
                if(start==end)
                {
                    if(v[start]%y==0)
                    {
                        c++;
                    }
                }
                else{
                    if(v[start]%y==0)
                    {
                        c++;
                    }
                    if(v[end]%y==0)
                    {
                        c++;
                    }
                }
                start++;
                end--;
            }
            printf("%d ",c);
        }
    }
    printf("\n");
}
int main()
{
    
    int t;
    scanf("%d",&t);
    bool prime[1001];
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i=2;i*i<1001;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i;j<=1000;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    // if(prime[t]==true)
    // {
    // 	cout<<"true"<<endl;
    // }
    // else{
    // 	cout<<"false"<<endl;
    // }
    while(t--)
    {
    	// cout<<"games"<<endl;
        solve(prime);
    }
    return 0;
}
