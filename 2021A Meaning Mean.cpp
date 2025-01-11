#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,n2=1;
        cin>>n;
      vector<int> a;
      for(int i=0;i<n;i++){
       int x;
       cin>>x;
       a.push_back(x);       
       n2++;
      }
      sort(a.begin(),a.end());
      int max=a[0];
      for(int i=1;i<n;i++){
        max= (max+a[i])/2;
      }
      cout<<max<<endl;
     
    }
}








