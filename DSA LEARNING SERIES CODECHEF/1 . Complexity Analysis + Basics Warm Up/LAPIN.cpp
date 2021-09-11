/*

	1 . Complexity Analysis + Basics Warm Up
	
	DSA Learning Series - Contest 1

	https://www.codechef.com/LRNDSA01/problems/LAPIN

	Lapindromes 

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ll64 int64_t
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	string s;
	cin>>s;
	int size=s.size();
	size=size/2;
	int a[26]={0};
	for(int i=0;i<size;i++)
	{
		// cout<<s[i]<<endl;
		a[s[i]-'a']++;
	}
	if(s.size()%2==1)
	{
		size++;
	}
	// cout<<size<<endl;
	for(int i=size;i<s.size();i++)
	{

		a[s[i]-'a']--;
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]>0)
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}
int main()
{
  SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB
  int t=1;cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}