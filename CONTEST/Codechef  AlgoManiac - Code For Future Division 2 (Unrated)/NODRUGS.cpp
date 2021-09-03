/*

  https://www.codechef.com/CDMN21B/problems/NODRUGS

  Say No To Drugs

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KARO ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 int n,k,l;
 cin>>n>>k>>l;
 int a[n];
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 int fri=a[n-1];
 int maxE=INT_MIN;
 for(int i=0;i<n-1;i++)
 {
  maxE=max(maxE,a[i]);
 }
 if(fri>maxE)
 {
  cout<<"Yes"<<endl;
  return;
 }
 while(l>0)
 {
  if(fri>maxE)
  {
    cout<<"Yes"<<endl;
    return;
  }
  fri=fri+k;
  l=l-1;
 }
 cout<<"No"<<endl;
}
int main()
{
  SPEED_KARO
  int t;cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}