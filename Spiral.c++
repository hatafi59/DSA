#include<bits/stdc++.h>
using namespace std;
#include<vector>
void solve() {
    long long n,i,j;
    cin>>n;
   while(cin>>i>>j){
    if(i>=j && !(i&1)) cout<<i*i-j+1<<'\n';
    else if(i>=j && (i&1)) cout<<(i-1)*(i-1)+j<<'\n';
    else if(i<j && !(j&1)) cout<<(j-1)*(j-1)+i<<'\n';
    else if(i<j && (j&1)) cout<<j*j-i+1<<'\n';
   }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve(); 
    return 0;
}
