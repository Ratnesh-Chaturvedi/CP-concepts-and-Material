// checking a number is prime or not 

bool IsPrime(int n){
    if(n==0 || n==1) return false;
    //btw 2 to n-1 there is no factor
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false; // not prime
    }
    return true; // prime

}



// find the factor of the number

void factor(int n){

    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=(n/i)){
                cout<<n/i<<" ";
            }
        }
    }
}




// find all prime number btw a range from 0
// using the Sieve of Eratosthenes
//TC- O(n*(log2log2n))

vector<bool>Sieve(int n){
 vector<bool>isprime(n+1,true);
isprime[0]=isprime[1]=false;
 for(int i=2;i*i<=n;i++){
    if(n%i==0) isprime[i]=false;
    for(int j=i*i;j<=n;j+=i){
        if(n%j==0) isprime[j]==false;
    }
 }
}

// GCD OR HCF 
int gcdrec(int a ,int b){
  if(b==0) return a;
  return gcdrec(b,a%b);
}



// Binary Exponentiation
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


// 2d array prefix sum
long long pf[N][N];
// starting from 1 to N
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        pf[i][j]=a[i][j]+pf[i-1][j]+pf[i][j-1] -pf[i-1][j-1];
    }
}

// claculation for finding the sum from a,b to c,d
pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1] 

