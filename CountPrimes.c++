#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
        if (n < 2) return 0;
        vector<int> primes(n+1,1);
        primes[0]=0;
        primes[1]=0;
        int res=0;
        
        for(int i=2; i<=sqrt(n);i++){
            if(primes[i])
                for(int j=2;i*j<=n;j++)
                    primes[i*j]=0;
            
        }
        for(int i=2 ; i< n ; i++)
            if(primes[i]) res++;
       
        return res;
        
    }
int main(){
    cout<<"le nombre des nombres premiers  dans 15 est :"<<countPrimes(15);
    return 0;
}