/*

  https://www.codechef.com/SEPT21B/problems/MNDIGSUM

  Minimize Digit Sum
  
  Score  : 50 

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

int findDigitSumBase(int n,int b)
{
  int sum=0;
  while(n>0)
  {
    sum+=n%b;
    n=n/b;
  }
  return sum;
}
void solve()
{
  int n,l,r;
  cin>>n>>l>>r;
  if(r>=n && l<=n)
  {
    cout<<n<<endl;
    return;
  }
  if(r>n && l<n)
  {
    cout<<l<<endl;
    return;
  }
  int minE=INT_MAX,index=0;
  for(int i=r;i>=l;i--)
  {
    // cout<<
    if(r>=n && n%i==0)
    {
      cout<<i<<endl;
      return;
    }
    int digitsum=findDigitSumBase(n,i);
    if(digitsum<=minE)
    {
      minE=digitsum;
      index=i;
    }

  }
  cout<<index<<endl;
  // int n,l,r,min,sum,sum2,enterInt;
  // cin >> n >> l >> r;
        
  //       if (n >= l && n <= r) {
  //           cout << n << "\n";
  //           return;
  //       }
        
  //       if (n < l) {
  //           cout << l << "\n";
  //           return;
  //       }
    
  //       sum2 = INT_MAX;
  //       min = 0;
       
  //       while (l < r && n / r < r) {
  //           int temp1 = n / r, temp2 = n % r;
  //           if (sum2 > temp1 + temp2) {
  //               sum2 = temp1 + temp2;
  //               min = r;
  //           }
            
  //           r = n / (temp1 + 1);
  //       }
  //       while (l <= r) {
  //           enterInt = n;
  //           sum = 0;
  //           for (;;) {
  //               if (enterInt < l) {
  //                   sum += enterInt;
  //                   if (sum < sum2) {
  //                       min = l;
  //                       sum2 = sum;
  //                   }
  //                   break;
  //               }
  //               sum += enterInt % l;
  //               enterInt /= l;
  //               if (sum >= sum2)
  //                   break;
  //           }
  //           l++;
  //       }
  //      cout << min << "\n";
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