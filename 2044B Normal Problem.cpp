//2044B Normal Problem 
#include<bits/stdc++.h>
using namespace std;

int main(){
      int t;
      cin>>t;
      while(t--){
        
        string a,b;

        cin>>a;
        b=a;
        reverse(b.begin(), b.end());
       // cout<<b<<" ";

       for(int i=0;i<a.size();i++){
          if(b[i]=='p'){
            b[i]='q';
          }else if(b[i]=='q') b[i]='p';
        }
        cout<<b<<endl;


      }  

}