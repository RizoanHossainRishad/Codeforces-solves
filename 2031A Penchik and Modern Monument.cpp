#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
       
        int n;
        cin>>n;
        //vector<int> arr;
        std::unordered_map<int, int> occurrences;
         for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        //arr.push_back(x);
        occurrences[x]++;
    }
    int max_occurence=0;
    for (const auto& pair : occurrences) {
       // std::cout << "Number " << pair.first << " appears " << pair.second << " times." << std::endl;
        if(pair.second>max_occurence) {
            max_occurence=pair.second;
        }

    }
    cout<<n-max_occurence<<endl;

      




    }
}