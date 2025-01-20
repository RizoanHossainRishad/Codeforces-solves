#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      bool f=false;
      int cnt=-1;
      for(int i=0;i<n && !f;i++){
        bool flag=true;
        for(int j=0;j<n;j++){
          if(i!=j && abs(a[i]-a[j])%k==0){
            flag=false;
            break;
          }
        }
        if(flag){
          f=true;
          cnt=i+1;
        }
      }
      
      if(f){
        cout<<"YES"<<endl;
        cout<<cnt<<endl;
      }else{
        cout<<"NO"<<endl;
      }
     

    }
  }


 

