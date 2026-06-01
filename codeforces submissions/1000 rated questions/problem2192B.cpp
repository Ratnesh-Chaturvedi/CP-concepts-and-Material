2192#include <bits/stdc++.h>
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

ll n;
cin>>n;
string s;
cin>>s;

ll cnt1=0,cntz=0;
vll idxone,idxzero;
for(int i=0;i<n;i++){
  if(s[i]=='1'){
    cnt1++; 
    idxone.pb(i+1);
  }
  else {
    cntz++;
    idxzero.pb(i+1);
  }
}
if(cnt1%2==0){
  cout<<cnt1<<endl;
  for(auto &it:idxone)cout<<it<<" ";
  if(cnt1!=0)cout<<endl;
}
else if(cntz%2==1){
  cout<<cntz<<endl;
   for(auto &it:idxzero)cout<<it<<" ";
}
else cout<<-1<<endl;





}


int main(){
ratnesh_16;

ll t;
cin>>t;
while(t--)
  solve();


}
