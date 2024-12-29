//2048B - Kevin and Permutation
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 


int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int perm[n]={0};
       int j=0;
       int temp=1;
       while(j+k<=n){
            j+=k;
           perm[j-1]=temp;
           temp++;
        
       }
       for(int i=0;i<n;i++){
        if(perm[i]==0){
            perm[i]=temp;
            temp++;
        }
       }

       
       for(int i=0;i<n;i++){
        cout<<perm[i]<<" ";
       }
       cout<<endl;
        
    }
}



    
    
