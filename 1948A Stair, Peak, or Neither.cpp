#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

    int test;
    cin>>test;
    while(test--){
        
    int a,b,c;
    cin>>a>>b>>c;
    /*if a<b<c then it is a STAIR
    if a<b>c then PEAK or else just print none*/
    //PEAK condition : a<c<b || c<a<b any of these should print PEAK in short a and c isn't to be considered here. 
    
    if(b>a && b>c){
        cout<<"PEAK"<<endl;
    }else if(c>a &&c>b && b>a){
        cout<<"STAIR"<<endl;
    }else{
        cout<<"NONE"<<endl;
    }
          
    }
}
    
/*Input: 
                7
                1 2 3
                3 2 1
                1 5 3
                3 4 1
                0 0 0
                4 1 7
                4 5 7
output:
                STAIR
                NONE
                PEAK
                PEAK
                NONE
                NONE
                STAIR
*/