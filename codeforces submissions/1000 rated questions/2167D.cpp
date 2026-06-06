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


bool IsPrime(int n){
    if(n==0 || n==1) return false;
    //btw 2 to n-1 there is no factor
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false; // not prime
    }
    return true; // prime

}
ll maxi=1e5+1;
vector<bool> is_prime(maxi, true);
// find all prime number till 10^5
void Sieve(ll maxi) {
    is_prime[0] = is_prime[1] = false;
    // Put the sqrt condition directly in the loop control
    for (ll i = 2; i * i <= maxi; i++) { 
        if (is_prime[i]) {
            for (ll j = i * i; j <= maxi; j += i) {
                is_prime[j] = false;
            }
        }
    }
}



void solve(){
ll n;
cin>>n;

vll arr(n);
for(auto &it:arr)cin>>it;


// number can be anything we just need the smallest num that gives gcd(arr[0],x)=1;


// if the num is prime then smallest number will be 2 

// if not prime -> any prime number can be the answer but minimum that has gcd(el,x)=1;

  int mini=INT_MAX;
  for(auto it:arr){

    for(int i=2;i<1000;i++){
      if(is_prime[i]){
        if(it%i!=0){
          mini=min(mini,i);
          break;
        } 
      }
    }
  }
  cout<<mini<<endl;
}





int main(){
ratnesh_16;

ll t;
cin>>t;
Sieve(maxi);
while(t--)
  solve();


}
