#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        ll b[n];
        int flag=0;
        for(int i=0;i<n;i++){
            if(flag==0) cin>>a[i];
            else if(flag==1) cin>>b[i];
            if(i==n-1 && flag==0){
                i=-1;
                flag=1;
            }
        }
        int nocond=0;
       // vector<int> j;
        ll diff=0;
        ll sum=0;
         for(int i=0;i<n;i++){
            if(a[i]<b[i]){
            diff=(b[i]-a[i]);
            a[i]+=diff;
            for (int j = 0; j < n; j++) {
                    if (j != i) a[j] -= diff;
                }
            }
 
            
        }
        int f=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                f=1;
            }
        }
        if(f) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

  }}








