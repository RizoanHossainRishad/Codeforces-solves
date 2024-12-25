// 2032A Circuits
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
      
      vector<int> a;

      for(int i=0;i<2*n;i++){
        int x;
        cin>>x;
        a.push_back(x);
      }
      int count1= count(a.begin(),a.end(),1);
      int count0= count(a.begin(),a.end(),0);
      int max,min;
      if(count0==count1){
        max=n;
        if(count0%2==0){
        min=0;   
        }else{
        min=1;
        }
      }else if(count0>count1){
        max=count1;
        if(count0%2==0){
        min=0;   
        }else{
        min=1;
        }
      }else{
        max=count0;
        if(count1%2==0){
        min=0;   
        }else{
        min=1;
        }
      }
       
      cout<<min<<" "<<max<<endl;
      //cout<<min<<" "<<max<<endl;
         
        }
        return 0;
    }
    
