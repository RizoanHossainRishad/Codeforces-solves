// 2044C hard problem
#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    
    int maxnum=0;

    //this is the longer way 
  // int arr[2][m];
   /* 
  for(int i=0;i<2;i++){
    for(int j=0;j<m;j++){
      if(i==0){
        if(a>0){
          //arr[i][j]=1;
          a--;
          maxnum+=1;
        }
       
      }else if(i==1){
        if(b>0){
          //arr[i][j]=1;
          b--;
          maxnum+=1;
        }
      }
    }

  }*/
//this is the shorter way 
   if(a>m){
          maxnum+=m;
        }else{
          maxnum+=a;
        }
        if(b>m){
          maxnum+=m;
        }else{
          maxnum+=b;
        }
    if(c>=(2*m - maxnum)){
      cout<<2*m<<endl;
    }else{
      cout<<maxnum+c<<endl;
    }

    
    
   }
}  

 

/* Input: 
5
10 5 5 10
3 6 1 1
15 14 12 4
1 1 1 1
420 6 9 69
 output: 
 20
5
30
2
84
*/