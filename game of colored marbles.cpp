#include<bits/stdc++.h>

using namespace std;
/* Evabe hobe na hard coding 
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> color;
    for(int i=1;i<=n;i++){
      int x;
      cin>>x;
      color.push_back(x);
    }
   
    set<int> distinctcolor;   
    for(int num:color){  
      distinctcolor.insert(num);
    }
unordered_map<int, int> colorFreq;
    for (int num : color) {
        colorFreq[num]++;
    }

    vector<pair<int, int>> sortedFreq;
    for (auto it = colorFreq.begin(); it != colorFreq.end(); ++it) {
        sortedFreq.push_back(make_pair(it->second, it->first));
    }

    sort(sortedFreq.begin(), sortedFreq.end());
vector<pair<int, int>> newSortedFreq;
    for (const auto& pair : sortedFreq) {
        cout << pair.first << " " << pair.second << endl;
    }

    if( distinctcolor.size()==1 && n>1){
      cout<<1<<endl;
    }else if( distinctcolor.size()==n){
      if(n%2!=0){        
        cout<<n+1<<endl;
      }else{
        cout<<n<<endl;
      }
    }else{
      int m=(n%2==0)?n/2:(n+1)/2;

      int turn=n;
      int point=0;
       
        for (const auto& pair : sortedFreq) {
            if (pair.first == 1 && m != 0 && ((n+1)%2==0)) {
                    
                    if (((turn+1) % 2== 0) || turn>1) {
                      //cout<<"point +2"<<endl;
                      point=point+2;
                      newSortedFreq.push_back({pair.first - 1, pair.second});
                      m--;
                      turn--;
                    } else if ( turn % 2 == 0 ) {
                      newSortedFreq.push_back({pair.first - 1, pair.second});
                      turn--;
                    }
            }else if(pair.first == 1 && m != 0 && n%2==0){

                       if (turn % 2 == 0 ) {
                        //cout<<"point +2 and turn is "<<turn<<endl;
                         point=point+2;
                         newSortedFreq.push_back({pair.first - 1, pair.second});
                         m--;
                         turn--;
                    } else if ( ((turn+1) % 2== 0)) {
                       newSortedFreq.push_back({pair.first - 1, pair.second});
                       turn--;
                      }
              }else if(pair.first>1 && m != 0 && ((n+1)%2==0)){
                      


                        if (((turn+1) % 2== 0) || turn>1) {
                        
                        point=point+1;
                        newSortedFreq.push_back({pair.first - 1, pair.second});
                        m--;
                        turn--;
                      } else if ( turn % 2 == 0) {
                        
                        newSortedFreq.push_back({pair.first - 1, pair.second});
                        turn--;
                      }

              }else if(pair.first>1 && m != 0 && n%2==0){

                            if (((turn+1) % 2== 0) || turn>1){
                           point=point+1;
                           newSortedFreq.push_back({pair.first - 1, pair.second});
                           m--;
                        turn--;
                      } else if ( turn % 2 != 0) {
                         newSortedFreq.push_back({pair.first - 1, pair.second});
                         turn--;
                      }
              }
        }
        cout<<point<<endl;
    }

    }
  }
*/

int main()
{
    int t;
    scanf("%d", &t);
    for(int j = 0; j < t; j++)
    {
        int n;
        scanf("%d", &n);
        vector<int> c(n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &c[i]);
            --c[i];
        }
        vector<int> cnt(n);
        for(auto x : c) cnt[x]++;
        int exactly1 = 0, morethan1 = 0;
        for(auto x : cnt)
            if (x == 1)
                exactly1++;
            else if(x > 1)
                morethan1++;
        printf("%d\n", morethan1 + (exactly1 + 1) / 2 * 2);
    }
}

    
