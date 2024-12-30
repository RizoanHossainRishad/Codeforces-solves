
/*2048A. Kevin and Combination Lock

Kevin is trapped in Lakeside Village by Grace. At the exit of the village, there is a combination lock that can only be unlocked if Kevin solves it.

The combination lock starts with an integer x. Kevin can perform one of the following two operations zero or more times:

If x≠33, he can select two consecutive digits 3from x and remove them simultaneously. For example, if x=13323, he can remove the second and third 3,changing x to 123.
If x≥33, he can change x to x−33 . For example, if x=99, he can choose this operation to change x to 99−33=66.
When the value of x on the combination lock becomes 0, Kevin can unlock the lock and escape from Lakeside Village. Please determine whether it is possible for Kevin to unlock the combination lock and escape.

Input
Each test contains multiple test cases. The first line contains the number of test cases t(1≤t≤104).
The only line of each test case contains a positive integer x(1≤x≤109).

Output
For each test case, output "YES" or "NO" (without quotes) in one line, representing whether Kevin can unlock the combination lock and escape. You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses*/

#include <iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        string str = to_string(x);

        // Check and remove all occurrences of "33"
        size_t pos = str.find("33");
        while (x >= 33) {
            if (pos != string::npos) { // string::npos is largest possible value of size_t type so as long as pos isnt that the codition will hold true
              //When you use functions like find, rfind, find_first_of, etc., they return string::npos if the substring or character is not found.
                while (pos != string::npos) {
                    str.erase(pos, 2);
                    pos = str.find("33");
                }
                if (!str.empty()) {
                    x = stoll(str);
                } else {
                    x = 0;
                    break;
                }
                pos = str.find("33");
            } else {
                x -= 33;
                str = to_string(x);
                pos = str.find("33");
            }
        }

        // Check if the result is zero
        if (x == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
