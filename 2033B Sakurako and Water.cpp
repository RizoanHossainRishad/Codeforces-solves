#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        ll n;           
        cin >> n; // Matrix size (n x n)
        vector<vector<int>> arr(n, vector<int>(n));
        
        // Input the matrix
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        //Shob gulo diagonal store korbo 
        vector<vector<int>> primaryDiagonals;
        for (int startRow = 0; startRow < n; startRow++) {
            vector<int> diagonal;
            int i = startRow, j = 0;
            while (i < n && j < n) {
                diagonal.push_back(arr[i][j]);
                i++;
                j++;
            }
            primaryDiagonals.push_back(diagonal);
        }
        for (int startCol = 1; startCol < n; startCol++) {
            vector<int> diagonal;
            int i = 0, j = startCol;
            while (i < n && j < n) {
                diagonal.push_back(arr[i][j]);
                i++;
                j++;
            }
            primaryDiagonals.push_back(diagonal);
        }

     

       //Prottek diagonals er minimum ekta array te store kore rakhbo
        vector<int> mins;
        int min=0;
        int intex=0;

        for (const auto& diagonal : primaryDiagonals) {
            for (int val : diagonal) {
                //cout<<val<<" ";
                if(val<0 && val<min) min=val;
            }
            mins.push_back(min);
            min=0;
            //cout << endl;
        }
        min=0;
        //Oi minimumgula jog kore sign +ve kore dibo 
        for(auto it:mins){
            min+= -it;
        }
        cout<<min<<endl; //Answer
        
    }
    return 0;
}