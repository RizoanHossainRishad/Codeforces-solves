#include <iostream>
#include <vector>
using namespace std;

void setarraya(vector<char> &lineup, int k) {
    lineup.clear();
    for (int i = 0; i < k; i++) {
        lineup.push_back('A' + i);
    }
}

void res(vector<char> &lineup, int *a, int qi, int k) {
    setarraya(lineup, qi);

    while (true) {
        int kick = 0;
        vector<int> indices_to_erase;

        for (int j = 0; j < k; j++) {
            if (a[j] - 1 < lineup.size()) {
                indices_to_erase.push_back(a[j] - 1);
            }
        }

        if (indices_to_erase.empty()) {
            break;
        }

        for (int index : indices_to_erase) {
            if (index < lineup.size()) {
                lineup.erase(lineup.begin() + index);
                kick++;
            }
        }

        if (kick == 0) {
            break;
        }
    }

    cout << lineup.size() << " ";
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        int k, qn;
        cin >> k >> qn;
        int q[qn];
        int a[k];
        vector<char> lineup;

        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < qn; i++) {
            cin >> q[i];
        }

        for (int i = 0; i < qn; i++) {
            res(lineup, a, q[i], k);
        }

        cout << endl;
    }

    return 0;
}
