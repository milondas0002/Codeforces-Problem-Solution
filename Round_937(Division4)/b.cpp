#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < 2*n; ++i) {
            for (int j = 0; j < 2*n; ++j) {
                if ((i / 2 + j / 2) % 2 == 0) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            }
            cout << '\n';
        }
    }
    return 0;
}