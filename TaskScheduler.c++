#include<bits/stdc++.h>
using namespace std;

int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);

        int max_freq = 0;
        for (char task : tasks) {
            freq[task - 'A']++;
            max_freq = max(max_freq, freq[task - 'A']);
        }
        
        int max_count = -1;
        for (int count : freq) 
            if (count == max_freq) max_count++;
        int ans = (max_freq - 1) * n + max_freq + max_count;

        return max(int(tasks.size()), ans);
}
void solve() {
    int n = 3;
    vector<char> tasks = {'A','A','A','B','B','C','C','D',};
    cout << leastInterval(tasks, n) << endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
