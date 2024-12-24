#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

    int test;
    cin>>test;
    while(test--){
        
        long n;
        cin>>n;
       unordered_map<int,int> cardme;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cardme[x]++;
           
        }
        int sum=0;
        for(auto cal:cardme){
            if(cal.second>1){
                sum+= cal.second-1;
            }
        }
        cout<<sum<<endl;
        
      
          
}
}
    