/*

  https://www.codechef.com/START10B/problems/CRDFLP

  Magical Flips 

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);
bool checkVowel(char c)
{
	if(c=='A'||c=='I'||c=='O'||c=='U'||c=='E') return true;
	return false;
}
//  BRUTE FORCE CODE
// void go(vector<ll> a,vector<ll> b,int i,int n,int step,ll &res,ll &step1)
// {
//   if(i==n)
//   {
//     ll sum=a[0];
//     for(int j=1;j<n;j++)
//     {
//       sum=sum&a[j];
//     }
//     if(sum>=res)
//     {
//       res=sum;
//       step1=step;
//     }
//     cout<<sum<<endl;
//     return ;
//   }
//   int y=a[i];
//   a[i]=b[i];
//   go(a,b,i+1,n,step+1,res,step1);
//   a[i]=y;
//   go(a,b,i+1,n,step,res,step1);
// }
void solve()
{
  int n;
  cin>>n;
  vector<ll> a,b;
  for(int i=0;i<n;i++)
  {
    ll x;cin>>x;
    a.push_back(x);
  }
  for(int i=0;i<n;i++)
  {
    ll x;cin>>x;
    b.push_back(x);
  }
/* BRUTE FORCE
  // ll res=LLONG_MIN,step1=0;
  // go(a,b,0,n,0,res,step1);
  // if(res==0)
  // {
  //   cout<<0<<" "<<0<<endl;
  // }
  // else{
  //   cout<<res<<" "<<step1<<endl;
  // }
  // cout<<endl;
*/
  int maxAND=0,minFLIP=0;
  vector<int> Ulta(n, -1);
  for(int i = 29; i >= 0; i--) 
  {
  int Hoskata = 1;
  for(int j = 0; j < n; j++) 
  {
   if(Ulta[j] != -1) 
   {
    if(Ulta[j] == 1) 
    {
      Hoskata = ((Hoskata&(b[j]>>i)&1));
    }
    else 
    {
      Hoskata = ((Hoskata&(a[j]>>i)&1));
    }
    continue;
   }
   if(((a[j]>>i)&1) || ((b[j]>>i)&1)) 
   {}
   else
  {
    Hoskata = 0;
    break;
   }
  }
  if(!Hoskata)
  {
     continue;
  }
  int val = 1;
  for(int j = 0; j < n; j++) 
  {
   if(Ulta[j] != -1) 
   {
    if(Ulta[j] == 1)
    {
       val = ((val&(b[j]>>i)&1));
    }
    else 
    {
      val = ((val&(a[j]>>i)&1));
    }
    continue;
   }
   if(((a[j]>>i)&1) && ((b[j]>>i)&1))
    {}
   else if(((a[j]>>i)&1))
   {
    Ulta[j] = 0;
   }
   else if(((b[j]>>i)&1)) 
   {
    Ulta[j] = 1;
    minFLIP++;
   }
   else 
   {
    val = 0;
    break;
   }
  }
  maxAND += (val * (1ll<<i));
 }
 cout<<maxAND<<" "<<minFLIP<<endl;
}
int main()
{
  speed_karo
  int t;cin>>t;
  for (int i = 0; i < t; ++i)
  {
  	// cout<<"Case #"<<i+1<<": ";
  	solve();
  }
  return 0;
}