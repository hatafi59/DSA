#include<bits/stdc++.h>
using namespace std;
#include<vector>
void solve() {
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }
    int odd_count = 0;
    for (int f : freq) {
        if (f % 2 == 1) {
            odd_count++;
        }
    }
    if (odd_count > 1) {
        cout << "NO SOLUTION\n";
    } else {
        string left = "";
        char middle = '\0';
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) {
                middle = 'A' + i;
            }
            left += string(freq[i] / 2, 'A' + i);
        }
        string right = left;
        reverse(right.begin(), right.end());
        cout << left;
        if (middle != '\0') {
            cout << middle;
        }
        cout << right << '\n';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve(); 
    return 0;
}
