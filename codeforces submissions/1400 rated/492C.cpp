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
ll n,r,avg;
cin>>n>>r>>avg;

vector<pairll>arr;
ll sum=0;

for(int i=0;i<n;i++){

  ll a,b;
  cin>>a>>b;
  arr.pb({b,a});
  sum+=a;

}
ll sumgiven=n*avg;

ll sumreq=sumgiven-sum;
if(sumreq<=0){
  cout<<0<<endl;
  return;
}
sort(arr);
ll reqb=0;
for(int i=0;i<n && sumreq>0 ;i++){
    ll bb=arr[i].first;
    ll aa=arr[i].second;

  // max we can increase 
  ll val=r-aa;
  // val<0 means we cant increase in this scenario
  if(val<=0){
    continue;
  }
  // we have chances to increase value
  if(sumreq-val>=0){
    sumreq-=val;
    reqb+=bb*(val);
  }
  else {
    // we can take less than that val 
    reqb+=sumreq*bb;
    sumreq=0;
   
  }

}
cout<<reqb<<endl;

}




int main(){
ratnesh_16;


  solve();


}
