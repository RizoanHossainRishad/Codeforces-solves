#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){

        int n,m;
        cin>>n>>m;
            
            if(n>=m){
                int c=n-m;
                if(c%2!=0)
                cout<<"NO"<<endl;
                else
                cout<<"YES"<<endl;
            }else if(m>n){
                cout<<"NO"<<endl;
            }
        }       
    }



