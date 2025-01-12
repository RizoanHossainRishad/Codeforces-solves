#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        if(a>b){
            
            if((a-b-1)%2!=0 && (a-b)!=1){

                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }if(b>a){
            if((b-a-1)%2!=0 && (b-a)!=1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

       
    }   
}








