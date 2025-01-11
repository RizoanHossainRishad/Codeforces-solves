#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        vector<int> b;
        vector<int> c;
        int max=0,min=1001;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
           if(x>max) max=x;
           if(min>x) min=x;

        }

        int sum=0;
        for(int i=0;i<n;i++){
            if(i==0){
              b.push_back(max);
            c.push_back(max);  
          }else{
            b.push_back(min);
            c.push_back(max);
          }
          sum+= c[i]-b[i];
        }
        cout<<sum<<endl;

        
    }   
}








