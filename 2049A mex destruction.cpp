// 2049A Mex Destruction
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
      vector<int> a;

      for(int j=0;j<n;j++){
         int x;
         cin>>x;
         a.push_back(x);
      }

      int flag=0; //Flag 
      int count=0; // Count of subarrays 
      
   
      for(int i=0;i<n;i++){

         if(a[i]!= 0 && flag!=1){ /*jodi o na hoy and flag 0 thake means je nonnegative interger subarray shuru hocche so count 1 barabo and flag 1 kore dibo jate ei subarray er jonne abar ei if condition e na dhuke*/    
            flag=1;
            count+=1;
         }
         if(a[i]==0){ /*jodi 0 peye jay means new subarray pore shuru hote pare so flag 0 kore dibo*/
            flag=0;
         }

      }

      /*Number of nonzero subarrays er shob element ke 0 korai amar goal , but subarrays jodi 2 er odhik thake amader exactly 2 tar beshi step lagbe na konodin o so count 2 er boro hole ans 2 e hobe as count hocche subarrays koyta ache tar count*/
      if(count>2) cout<<"2"<<endl;
      else cout<<count<<endl;
   }
}