#include<bits/stdc++.h>
using namespace std;
#include<vector>
void solve() {
    int x,n;
    cin>>n>>x;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
	  cin>>vec[i];	
    }
   

    sort(vec.begin(), vec.end());
    int l=0,r=n-1, res=0;
    while(l<=r){
	    if(vec[l]+vec[r]<=x) l++;
        r--;
        res++;
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
