#include<bits/stdc++.h>
using namespace std;

long long solve_query(long long n, long long k) {
    if (n == 1) return 1;
    
    if (k <= n / 2) return 2 * k;
    
    long long removed = n / 2;
    
    long long res = solve_query(n - removed, k - removed);
    
    if (n % 2 == 0) {
        return 2 * res - 1;
    } else {
        if (res == 1) return n;
        else return 2 * res - 3;
    }
}

void solve() {
    int q;
    cin >> q;
    while (q--) {
        long long n, k;
        cin >> n >> k;
        cout << solve_query(n, k) << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve(); 
    return 0;
}