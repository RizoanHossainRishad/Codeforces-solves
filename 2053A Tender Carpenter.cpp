#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
       
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        int flag=0;
        for(ll i=0;i<n-1;i++){
            ll maxx=max(arr[i],arr[i+1]);
            ll minn=min(arr[i],arr[i+1]);
            if(2* minn>maxx){
                
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}