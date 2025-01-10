#include<bits/stdc++.h>
using namespace std;


int main(){
	int test;
	cin>>test;
	
	while(test--){
		int n,m;
		cin>>n>>m;
		int mtmp=m;
		multiset<char> a;
		for(int i=0;i<n;i++){
			char xy ;
			cin>>xy ;
			a.insert(xy);
		}
		int count=0,sum=0;
		char s[]={'A','B','C','D','E','F','G'};
	
		 for(int i=0;i<(sizeof(s)/sizeof(s[0]));i++){
		 	int cnt=0;
        	for(auto j=a.begin();j!=a.end();j++){
        		if(s[i]==*j){
        			cnt++;
        		}

        	}
        	 if(cnt<m){
        			count=count+(m-cnt);
        		}
        		sum+=count;
        		//cout<<s[i]<<"is"<<cnt<<"times but need"<<m<<"times"<<" " <<count<< endl;
        		count=0;
    	}

    	cout<<sum<<endl;
    		a.clear();
		}
}