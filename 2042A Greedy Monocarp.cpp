//2042A greedy Monocarp
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      int count=0; //Number er sum 
      vector<int> a;
      for(int i=0;i<n;i++){
         int coin;
         cin>>coin;
         a.push_back(coin);  
         count+=coin;  //all coins in chest sum kore rakah hoyeche     
      }
      int feed=k;
      int xtra=0;
      if(count<k){ // Jodi mot chest e coin er poriman k er cheye kom hoy ultimately amar remaining
         //coin add kortei hobe , 10 ta coin mono carp nile ar jodi 2 ta chest e 2 ta coin thake ultimately 
         //8 ta coin amar add krotei hobe eijonne ei part
         cout<<k-count<<endl;
      }else if(count>=k){
         sort(a.begin(),a.end(),greater<int>()); /* First ei sort kore nibo . as monocarp shobcheye beshi coin 
         wala chest e age nibe so , amader hishab eo oi chest tai age hishab korbo amra xtra variable niyechi
         prottek chest er coin jog korte thakbo xtra er sathe until emon ekta porjay ashe hoy xtra , k er shoman hobe
         othoba , xtra k er cheye boro hoye jabe (xtra k er choto hote parbena karon amra count<k if condition e oi probablity hishab kore felechi)
         1) jodi xtra +a[i]<=k hoy  taile xtra er sathe a[i] jog korbo
         2) jodi xtra+a[i]>k hoye jay taile ar a[i] jog korbo na amra k er sathe xtra ke minus kore dilei ans eshe porbe shei khetre
            meaning amar extra oi poriman coin add korte hobe 
         3) ekta if condition thakbe jate prottekbar loop e check hobe xtra ki shoman holo kina k er
            othoba emon kono chest jate k poriman coin already ase emon hole amar 0 extra coins add kora lagbe answer o 0 e hobe
         */
         for(int i=0;i<n;i++){            
            
            if(xtra+a[i]<=k){
               xtra+=a[i];  
                        
            }else if(xtra+a[i]>k){
               feed= k-xtra;
               break;             
            }
            if(a[i]==k || xtra==k){
               feed=0;
               break;
            }
         }
        cout<<feed<<endl;
      }

   }
}