//tle,approach:- naive

class Solution {
public:
bool isPrime(int n){
            if(n<=1){
                return false;   //base case
            }
        for(int i=2;i<n;i++){
      if(n % i== 0){
        return false;
     } 
        }
        return true;
      }
    int countPrimes(int n) {
        int c=0;
        for(int i=0;i<n;i++){
            if(isPrime(i)){
         c++;
            }
        }
        return c;
    }
};

//tle, approach:- sqrt

class Solution {
public:
bool isPrime(int n){
            if(n<=1){
                return false;   //base case
            }
            int sqtrn=sqrt(n);
        for(int i=2;i<=sqtrn;i++){
      if(n % i== 0){
        return false;
     } 
        }
        return true;
      }
    int countPrimes(int n) {
        int c=0;
        for(int i=0;i<n;i++){
            if(isPrime(i)){
         c++;
            }
        }
        return c;
    }
};

//approach:- seive of eratosthenes

class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
        vector<bool> prime(n,true); //already all are marked prime
        prime[0]=prime[1]=false;
        int ans=0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                ans++;
                int j=2*i;
                while(j<n){
                    prime[j]=false;
                    j+=i;
                }
            }
        }
        return ans; 
    }
};
