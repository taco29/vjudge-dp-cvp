#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define endl "\n"
using namespace std;

const int MOD = 1e9 + 7, N = 1e6 + 1;
int F[N];

int main() {
    f();
    int n;
    cin >> n;
    F[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= 6; ++j) {
            if (j <= i)
                F[i] = (F[i] + F[i - j]) % MOD;
        }
    }
    cout << F[n] << endl;
    return 0;
}