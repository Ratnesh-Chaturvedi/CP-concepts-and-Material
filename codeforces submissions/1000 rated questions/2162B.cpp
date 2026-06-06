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
ll n;
cin>>n;

string s;
cin>>s;

vll arr;
for(int i=0;i<n;i++){
  if(s[i]=='1'){
    arr.pb(i);
  }
}

cout<<arr.size()<<endl;
for(auto it:arr)cout<<it+1<< " ";
cout<<endl;

}




int main(){
ratnesh_16;

ll t;
cin>>t;
while(t--)
  solve();


}
