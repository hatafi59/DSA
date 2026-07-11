#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n ; cin>>n;
	vector<long long> arr(n);
	for(int i=0 ; i<n ; i++) cin>>arr[i];
	if(arr.size()==1){
	   cout<<arr[0];
	   return 0;
	}
	sort(arr.begin(),arr.end());
	
	vector<long long>pr(n);
	pr[0]=arr[0];
	for(int i=1 ; i<n ; i++) pr[i]=arr[i]+pr[i-1];
	if(arr.size()&1)
	    cout<<pr[n-1]-pr[n/2-1];
    else
        cout<<-pr[n/2-1];

}
