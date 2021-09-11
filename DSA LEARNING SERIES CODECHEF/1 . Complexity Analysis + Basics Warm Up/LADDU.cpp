/*

	1 . Complexity Analysis + Basics Warm Up
	
	DSA Learning Series - Contest 1

	https://www.codechef.com/LRNDSA01/problems/LADDU
	
	Laddu

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ll64 int64_t
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int activities,sum=0;
	string s;
	cin>>activities>>s;
	for(int l=0;l<activities;l++)
	{
		string s1;
		int rank=-1,severity=-1;
		cin>>s1;
		if(s1=="CONTEST_WON")
		{
			cin>>rank;
			if(rank<=20)
			{
				sum+=(320-rank);
			}
			else{
				sum+=300;
			}
		}
		else if(s1=="BUG_FOUND")
		{
			cin>>severity;
			sum+=severity;
		}
		else if(s1=="TOP_CONTRIBUTOR")
		{
			sum+=300;
		}
		else if(s1=="CONTEST_HOSTED")
		{
			sum+=50;
		}

	}
	if(s=="INDIAN")
	{
		sum=sum/200;
		cout<<sum<<endl;
	}
	else{
		sum=sum/400;
		cout<<sum<<endl;
	}
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