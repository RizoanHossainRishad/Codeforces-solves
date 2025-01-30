#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> block(n);
    for(auto &i:block){
        cin>>i;
        
    }
   
   /*Ekhane 1^2 , 3^2 , 5^2 ..... evabe odd number
   reach holei aloyana happy hoy so ekhane input ja dibo 
   shob jog kore nearest highest odd square er sathe tulona
   korle happy count kora jabe*/
    int happy=0;
    for(int i=0,j=1,sum=0;i<n;i++){
        sum += block[i]; // Shob block jog hocche
        while(j*j<sum) j+=2; //ekhane odd square ber kore sum er sathe compare kora hocche         
        happy+=(sum==j*j); // Happy +1 hocche tokhon e jokhon sum==j*j hocche echara happy+0 hocche
        
    }
        cout<<happy<<endl;
    }

  }
    
