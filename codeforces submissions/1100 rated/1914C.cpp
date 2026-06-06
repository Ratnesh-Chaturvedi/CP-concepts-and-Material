#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define fir first
#define sec second
#define pb push_back
const ll MOD = 1e9 + 7;
#define endl "\n"
#define vi vector<int>
#define vll vector<long long>
#define pairll pair<long long,long long>
#define ratnesh_16 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sort(item) sort(item.begin(),item.end()); 






void solve(){
ll n,k;
cin>>n>>k;

vll a(n),b(n);

// prefix sum of array a
vll pr(n);
ll idx=0;

for(auto &it:a){
  cin>>it;
  if(idx==0)
  pr[idx]=it;
else pr[idx]=pr[idx-1]+it;

  idx++;

}
//  maximum elements till i  of array b 
idx=0;
  vll maxi(n);
  for(auto &it:b)
  {
    cin>>it;
    if(idx==0){
      maxi[idx]=it;
    }
    else 
    maxi[idx]=max(maxi[idx-1],it);


    idx++;
  }

// prefix array
// for(auto it:pr)cout<<it<<" ";

// cout<<endl;
// for(auto it:maxi)cout<<it<<" ";

// cout<<endl;

  // caluclating maximum sum as -> go to each index and then final k step when we react that index and if k!=0 then take the maximum from the array b and calcualte it as maxi*k

  ll mxsum=0;
  
  for(int i=0;i<n;i++){

    if(k<=0)break;
   ll el=a[i];
   // remaining k;
   ll remk=k-1;
    ll sum=pr[i];
    ll  maxiel=maxi[i];
    if(remk>0){
      sum+=maxiel*remk;
    }
    mxsum=max(mxsum,sum);
    // cout<<"pr: "<<pr[i]<<" remk:"<<remk<<" sum:"<<sum<<" maxiel:"<<maxiel<<" maxsum: "<<mxsum<<endl;
    k--;
  }
  cout<<mxsum<<endl;








}




int main(){
ratnesh_16;

ll t;
cin>>t;
while(t--)
  solve();


}
