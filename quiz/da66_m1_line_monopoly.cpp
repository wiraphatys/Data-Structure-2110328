#include <bits/stdc++.h>
using namespace std;
vector<bool> v(1000000001);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int last = -2e9;
    int first = 2e9;
    int cnt = 0;
    while (n--) {
        int x;
        cin >> x;
        if (x == 1) {
            int a, b;
            cin >> a >> b;
            if (a < first)
                first = a;
            if (b > last)
                last = b;
            for (int i = a; i <= b; ++i) {
                if (v[i - 1] == 0 and v[i + 1] == 0 and v[i] == 0)
                    cnt++;
                if (v[i - 1] == 1 and v[i + 1] == 1 and v[i] == 0)
                    --cnt;
                v[i] = 1;
            }
        } else if (x == 2) {
            cout << cnt << "\n";
        }
    }
}