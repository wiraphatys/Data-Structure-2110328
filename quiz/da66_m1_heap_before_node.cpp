#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, idx;
    cin >> n >> idx;
    if (idx == 0) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> v;
    v.push_back(idx);
    int c = 0;
    while(true) {
        int val = 2 * v[c];
        if (val+1 < n) {
            v.push_back(val+1);
        } else {
            break;
        }
        if (val+2 < n) {
            v.push_back(val+2);
        } else {
            break;
        }
        c++;
    }

    cout << n - v.size() << endl;
    for (int i = 0; i < n; ++i) {
        if (find(v.begin(), v.end(), i) == v.end()) {
            cout << i << ' ';
        }
    }
    return 0;
}