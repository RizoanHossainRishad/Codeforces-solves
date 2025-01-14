#include<bits/stdc++.h>
using namespace std;

// 2036A Quintomania
/*
8
2
114 109
2
17 10
3
76 83 88
8
38 45 38 80 85 92 99 106
5
63 58 65 58 65
8
117 124 48 53 48 43 54 49
5
95 102 107 114 121
10
72 77 82 75 70 75 68 75 68 75

*/
int main(){

    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int notes[n];
        for(int i=0;i<n;i++){
            cin>>notes[i];
        }
        int flag=0;
        int temp=notes[0];
        //cout<<temp<<endl;

        for(int i=1;i<n;i++){
            if((max(temp,notes[i])-min(temp,notes[i])!=7 && max(temp,notes[i])-min(temp,notes[i])!=5)){
                flag=1;
                //cout<<max(temp,notes[i])-min(temp,notes[i])<<endl;
            }else{
                temp=notes[i];
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }       
    }
   

}