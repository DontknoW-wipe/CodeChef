#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int k;
    cin >> k;
    int flag = 0;
    for(int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        int c1=0,c2=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a'&&s[i]<='m')
            {
                c1++;
            }
            else if(s[i] >= 'N'&&s[i] <= 'Z')
            {
                c2++;
            }
        }
        if(c1 != s.length() && c2 != s.length())
            {
                flag=1;
            }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
  speed_karo
  int t;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}