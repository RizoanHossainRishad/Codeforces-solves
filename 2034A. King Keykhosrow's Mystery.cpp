//2034A. King Keykhosrow's Mystery
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}


// Function to return LCM of two numbers 
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){
    int t; 
    cin>>t;
    while(t--){
        int a,b;
        int m;

        cin>>a>>b;

        //int temp;
        //temp= min(a,b);
        cout<< lcm(a,b)<<endl;





    }
}