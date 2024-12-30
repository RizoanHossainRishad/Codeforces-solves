
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
        string str = to_string(x); // Ekta string nibo str jate x er int take string e convert kore ene rakhbo

        // Check and remove all occurrences of "33"
        size_t pos = str.find("33"); // check korbo je str e kono 33 ase kina 
        while (x >= 33) { // loop cholbe until x , 33 er cheye choto hoye jay
            if (pos != string::npos) { // string::npos is largest possible value of size_t type so as long as pos isnt that the codition will hold true
              //When you use functions like find, rfind, find_first_of, etc., they return string::npos if the substring or character is not found. jodi 33 pai tahole pos e index of str jekhane 33 paise oita store hobe jemon 133 hole
                // pos = 1 hobe karon 1th index theke consecutive 33 shuru hoise . 
                while (pos != string::npos) {
                    str.erase(pos, 2); //pos e 1 pele 1 soho 2nd index o delete korte hobe so eijonne erase(pos,2) kora hoise 
                    pos = str.find("33");//ar kono 33 ase kina ta check hocche
                }
                if (!str.empty()) { //33 remove korar pore jodi str empty na hoy means je x ekhono 0 hoy nay so ei string take long long e niye x e rakhte hobe
                    x = stoll(str); // stoll hocche string to long long , erokom aro datatype er function gula holo
                    // stod (string to double), stof(string to float), stoi(string to int) , stol(string to long) , stoul(string to unsigned int)
                    //, stoull(string to unsigned long long), stold( string to long double) etc
                } else {
                    x = 0; //jodi str empty hoye jay means je x o 0 hoye gese which is my ideal goal for "YES"
                    break;// braeking out of the loop
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
