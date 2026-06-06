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
ll n,q;
cin>>n>>q;

string s;
cin>>s;

ll cnta=0;
for(auto it:s){
  if(it=='A')cnta++;
}

while(q--){
  ll num;
  cin>>num;
 
  if(cnta==n){
    cout<<num<<endl;
  }
  else {
    int i=0;
    ll cnt=0;
    while(num>0){
      i=i%n;
      if(s[i]=='A'){
        num=num-1;
      }else {
        num=num/2;
      }
      cnt++;
      i++;
    }
    cout<<cnt<<endl;

  }

}



}




int main(){
ratnesh_16;

ll t;
cin>>t;
while(t--)
  solve();


}
