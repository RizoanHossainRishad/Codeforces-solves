#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int> a;
        vector<int> b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            b.push_back(y);
        }
      
        int count=0;
        for(int j=0;j<n;j++){
            auto p=find(a.begin(),a.end(),b[j]); 
            if(a[j]>b[j]){
               a.pop_back();
               a.push_back(b[j]);
                count++;
                sort(a.begin(),a.end());
            }

        }
        
       cout<<count<<endl;

    }
}
/*2
6
1000 1400 2000 2000 2200 2700
800 1200 1500 1800 2200 3000
6
4 5 6 7 8 9
1 2 3 4 5 6
output: 
2
3

*/