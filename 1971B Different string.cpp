
#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int test;
   cin>>test;
   while(test--){
    string s;
    cin>>s;

   /*for (int x=0; x<s.size(); x++)
        tolower(s[x]);
    
    int splt_pnt=s.size()/2;
    string s1,s2;
    for(int i=0;i<splt_pnt;i++){        
        s1+=s[i];
    }
    for(int i=splt_pnt;i<s.size();i++){
        s2+=s[i];
    }

    if(s2+s1!=s){
        cout<<"YES"<<endl;
        cout<<s2+s1<<endl;
    }else cout<<"NO"<<endl;*/
    char temp;
    int count=0;
string s_copy=s;
    for(int i=1;i<s.size();i++){
    temp=s_copy[0];
    s_copy[0]= s_copy[i];
    s_copy[i]=temp;
    if(s_copy!=s){
        count++;
    }
}
if(count!=0){
    cout<<"YES"<<endl<<s_copy<<endl;
}else{
    cout<<"NO"<<endl;
}


  


   }

}