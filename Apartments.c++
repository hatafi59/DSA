#include<bits/stdc++.h>
using namespace std;
#include<vector>
void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> achat(n) , appart(m) ;
    for(int i=0; i<n ; i++) cin>>achat[i];
    for(int i=0; i<m ; i++) cin>>appart[i];
    sort(achat.begin(), achat.end()); 
    sort(appart.begin(), appart.end());
    int i=0 , j=0 , res=0;
    while(i<n && j<m){
     if(achat[i]>=appart[j]-k && achat[i]<=appart[j]+k){i++,j++;res++;}
     else if(achat[i]>appart[j]+k) j++;
     else i++;
    }
    cout<<res<<'\n';
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve(); 
    return 0;
}
