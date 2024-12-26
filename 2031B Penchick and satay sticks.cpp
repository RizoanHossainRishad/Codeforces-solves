//2031B - Penchick and Satay Sticks
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> p;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            p.push_back(x);
        } 
    int flag=1;
    if(n!=0){
      for(int i=0;i<n &&i+1<n ;i++){


            if(p[i]-p[i+1] ==1 && i!=n-1){
               
                swap(p[i],p[i+1]);
            }
    
      }
     }else{
        flag=0;
     }   
        vector<ll> g= p;
        sort(g.begin(),g.end());
        int l=0;
        for(auto it:g){
            if(it!= p[l]){
                flag=0;
            }
            l++;
        }


        if(flag==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

        

    }

     return 0;
}
    
