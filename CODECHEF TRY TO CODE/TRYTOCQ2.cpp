/*

	TRY TO CODE

	https://www.codechef.com/TRYC2021/problems/TRYTOCQ2

	Question2

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int number=1,lower=1,upper=1,special=1;
	for(int i=0;i<n;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			upper=0;
		}
		else if(s[i]>='a'&&s[i]<='z')
		{
			lower=0;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			number=0;
		}
		else{
			special=0;
		}
	}
	int y1=number+special+upper+lower;
	if(n+y1<6)
	{
		cout<<(6-(n+y1)+y1)<<endl;
	}
	else{
		cout<<y1<<endl;
	}

}
int main()
{
  SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB
  int t=1;//cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}