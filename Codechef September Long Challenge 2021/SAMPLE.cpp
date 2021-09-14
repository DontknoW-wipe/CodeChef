#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	vector<int> v;
	while(cin>>x)
	{
		v.push_back(x);
	}
	for(int i=0;i<v.size();i++)
	{
		if(sqrt(v[i])==(int)sqrt(v[i]))
		{
			cout<<v[i]<<" ";
		}
	}
}