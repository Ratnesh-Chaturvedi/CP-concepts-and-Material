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

 

int  mini(ll n,unordered_map<ll,ll>&hash){
 
  ll mn=n+1;
for(int i=0;i<=n;i++){
  if(hash[i]==0){
    return i;
  }
}
return mn;
   
}

void solve(){

ll n;
cin>>n;

vll arr(n);
unordered_map<ll,ll>pr,sf;
for(auto &it:arr){
  cin>>it;
sf[it]++;
}

sort(arr);

for(ll i=0;i<n-1;i++){
  pr[arr[i]]++;
  sf[arr[i]]--;
  if(sf[arr[i]]==0){
    sf.erase(arr[i]);
  }
  // minimum excluded in pf 
  ll mexpr=mini(n,pr);
  // minimum excluded in sf
  ll mexsf=mini(n,sf);
  // cout<<"mexpf & mexsf:"<<mexpr<<" "<<mexsf<<endl;
  if(mexpr==mexsf){
    cout<<"NO"<<endl;
    return;
  }
}
// cout<<endl;
cout<<"YES"<<endl;


}


int main(){
ratnesh_16;

ll t;
cin>>t;
while(t--)
  solve();


}
