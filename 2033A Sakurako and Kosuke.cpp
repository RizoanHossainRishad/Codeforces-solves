// 2033A Sakurako and Kosuke
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int x=0;
      int flag=0;
      int series=1;
      for(int i=0;i<n;i++){
        if(flag==0){
            x=x-series;
            series= series+2;
            flag=1;
        }else if(flag==1){
            x=x+series;
            series=series+2;
            flag=0;
        }
      }
      if(flag==1){
        cout<<"Kosuke"<<endl;
      }else{
        cout<<"Sakurako"<<endl;
      }
   }
}