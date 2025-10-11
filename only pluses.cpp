#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,c;
        cin>>a>>b>>c;
        int cnt=0,count=0;
        vector<int> x;
        x.push_back(a);
        x.push_back(c);
        x.push_back(b);
        sort(x.begin(),x.end()); 
        for(count=0;count<5;count++){
            
                x[0]+=1;            
              
            
            sort(x.begin(),x.end());            
        }
        cout<< x[0]*x[1]*x[2]<<endl;
        
        x.clear();

    }
    }
    



