#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int c;
            cin>>c;
            a.push_back(c);
        }
        vector<int> a2= a;
        int p=0;
        sort(a2.begin(),a2.end());
        if(a2==a){
            cout<<"YES"<<endl;
        }else{
            for(int i=0;i<n;i++){

            a.push_back(a[0]);
            a.erase(a.begin()+0);
            if(a==a2){
                cout<<"YES"<<endl;
                p=1;             
                break;
            }
            }

            if(p==0) cout<<"NO"<<endl;
        }
      
    }

}
   


