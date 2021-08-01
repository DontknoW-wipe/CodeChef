#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 
void solve() 
{ 
    int n; 
    cin >> n; 
    int a[n]; 
    map<int,int> mp; 
    ll c=0; 
    for(int i=0;i<n;i++) 
    { 
        cin>>a[i]; 
        mp[a[i]]++; 
        if (mp[a[i]] >= a[i])
        {
            continue;             
        }
        else
        {
            c++;
        } 
    } 
    cout<<c<<endl;
} 
int main() 
{ 
    int t;cin>>t; 
    while(t--) 
    { 
        solve(); 
    } 
    return 0; 
    
}
