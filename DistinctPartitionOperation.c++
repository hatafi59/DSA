#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	
	vector<int> freq(26,0);
	for(int i=0 ; i<s.size() ;i++){
	    freq[s[i]-'a']++;
	}
	
	int mn=INT_MAX;
	for(int i=0 ; i<26 ;i++){
	    
	    if(!freq[i]) continue ;
	    
	    vector<int> lastSeen(26,-1);
	    int count=0 , start=0;
	    int pass_continue =0;
	    for(int j=0 ; j<s.size() ;j++){
	        
	        if(s[j]-'a'== i) continue;
	        pass_continue =1;
	        
	        if(lastSeen[s[j]-'a']>=start){
	            count++;
	            start=j;
	            //cout<<'|';
	        }
	        //cout<<s[j];
	        lastSeen[s[j]-'a']=j;
	        
	    }
	    //cout<<endl;
	    if(pass_continue) count++;
	    
	    //cout<<"nbr "<<count<<endl;
	    mn = min(mn,count);
	}
	
	cout<<mn;

}
