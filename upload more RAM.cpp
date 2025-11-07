#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int count=0;
        int sum=0;
        int second=0;
        for(int j=0;j<n;j++){
        for(int i=0;i<k;i++){
           if(count==0){
            count++;
            sum+=1;
            second++;
           }else if(sum<n){
            second++;
           }

        }
        count=0;
    }
       cout<<second<<endl; 
    }
}