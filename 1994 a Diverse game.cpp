#include <iostream>

using namespace std;
int main(){

    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;

       int a[n][m];
  int sum[n]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               cin>>a[i][j];
                sum[i]=sum[i]+a[i][j];
            }
        }
        int b[n][m];
      
        int temp;
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                if(m>1){

                if(n<2 && m<2){
                    b[i][j]=-1;
                    flag++;
                    break;
                }                

                if(j==0)
                temp=a[i][j];
                if(j+1<m){
                b[i][j]=a[i][j+1];                
                }else if(j==m-1){
                    b[i][j]=temp;
                }
               
            }else if(m<2 && n>1){
                 if(i==0)
                temp=a[i][j];
                if(i+1<n){
                b[i][j]=a[i+1][j];                
                }else if(i==n-1){
                    b[i][j]=temp;
                }
            }else{
                b[i][j]=-1;
            }
        }
            if(flag==1){
                break;
            }
           
        }
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
      
           
        }
    }
