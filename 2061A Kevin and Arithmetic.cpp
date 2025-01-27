#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
       
        int n;
        cin>>n;
        vector<ll> a;
        ll sum=0;

        int points=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);

        
        }
        //sort(a.begin(),a.end(),greater<int>());
        ll even=0,odd=0;
        for(int i=0;i<n;i++){
                         
            if(a[i]%2==0){
                even++;
            }

        }

        odd=n-even;
        if(even>0){
            cout<<odd+1<<endl;
        }else{
            cout<<odd-1<<endl;
        }
       
        
        
        


    }
}