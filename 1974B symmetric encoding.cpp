#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char> r;
        for(int i=0;i<n;i++){
            r.insert(s[i]);
        }
        map<char,char> r2;
        auto temp= --r.end();
        for(auto i=r.begin();i!=r.end();i++){
            r2[*i]= *temp;
            temp--;
        }
        for(int i=0;i<n;i++){
           auto p2= r2.find(s[i]);
             //cout<<p2->first<< p2->second<<endl;
               s[i]=p2->second;                        
        }
        cout<<s<<endl;

    }
}

/*
input
 5
10
serofedsoc
3
ttf
9
tlrhgmaoi
1
w
15
hnndledmnhlttin

output:
codeforces
fft
algorithm
w
meetinthemiddle

*/

