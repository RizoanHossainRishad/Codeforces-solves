//2047B Replace character
/*B. Replace Character

You're given a string s
 of length n, consisting of only lowercase English letters.
You must do the following operation exactly once:
Choose any two indices iand j(1≤i,j≤n). You can choose i=j.
Set si:=sj.
You need to minimize the number of distinct permutations†
 of s. Output any string with the smallest number of distinct permutations after performing exactly one operation.
†A permutation of the string is an arrangement of its characters into any order. For example, "bac" is a permutation of "abc" but "bcc" is not.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains n
 (1≤n≤10
) — the length of string s
.

The second line of each test case contains s
 of length n
. The string contains only lowercase English letters.
This program is not copied from anywhere and is written purely by RizitoRE
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<char> s;
    map<char,int> countMap; // I have taken a map to count the occurences of each character that the string (vector in this case)
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        s.push_back(c);
        countMap[c]++; //every duplicate entry increments the .second by 1 , in simple terms incrementing the character count
    }

    //The main idea here is that we want to replace the least occurred character with a most occurred character and in case every character
    // occurred the same amount of time I want still to replace the least occured with some character that is different .
    // Simply , i dont want occurence counts to be balanced like aabbcc , but i will transform it to acbbcc or abbbcc or many more combinations 
    char minChar = '\0',maxChar='\0';
     int minCount = n-1,maxCount=0; 
     for (auto& pair : countMap) {
      if (pair.second <= minCount) { /*I have made so that minCount is changed even if occurence is same meaning it will not match with max count in any way as a character can be maxCount and minCount at the same time but if i change mincount every iteration means maxcount will stay the same but mincount will change for everytime the condition is true*/
         minChar = pair.first;
         minCount = pair.second; 
       }
        if (pair.second > maxCount) { //Here we are updating only if occurence count is greater than maxcount . It will grant us the absolute max occurred index 
         maxChar = pair.first;
         maxCount = pair.second; 
       }  
    }
  /*  cout << "The character with the maximum count is: '" << maxChar << "' with " << maxCount << " occurrences."<< "The character with the minimum count is: '" << minChar << "' with " << minCount << " occurrences." <<endl;*/
    int flag=0,i=0;
       while(flag!=1){ // Will do the update only 1 time only as we can change only 1 character as maxChar 
            if(s[i]==minChar){
                s[i]=maxChar;
                flag=1;
                i++;
            }else{
                i++;
            }
       }
    for(auto it:s){
        cout<<it;
    } 
    cout<<endl;
   }
}