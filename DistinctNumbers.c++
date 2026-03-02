#include<bits/stdc++.h>
using namespace std;
#include<vector>
void solve() {
    int t;
    cin>>t;
    set<int> s;
    int m;
    for(int i=0;i<t;i++){
        cin>>m;
        s.insert(m);
    }
    cout<<s.size()<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
