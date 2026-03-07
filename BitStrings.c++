#include<bits/stdc++.h>
using namespace std;
#include<vector>
void solve() {
    long long n;
    cin >> n;

    const long long MOD = 1e9 + 7;
    long long ans = 1;

    for(int i = 0; i < n; i++)
        ans = (ans * 2) % MOD;

    cout << ans << '\n';
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve(); 
    return 0;
}
