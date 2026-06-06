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
  
  vll arr(n);
  for(auto &it:arr)cin>>it;

  for(int i=n-1;i>=1;i--){
    for(int j=0;j<i;j++){
      if( (arr[i]%arr[j] )%2==0 ){
        cout<<arr[j]<<" "<<arr[i]<<endl;
        return;
      }
    }
  }


  cout<<-1<<endl;


}




int main(){
ratnesh_16;

ll t;
cin>>t;
while(t--)
  solve();


}
