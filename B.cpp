#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define endl "\n"
using namespace std;

const int MOD = 1e9 + 7, N = 1e6 + 1;
int F[N], coins[N], x, n;

int main() {
    f();
	cin >> n >> x;
    for(int i = 0; i < n; i++){
    	cin >> coins[i];
	}
    F[0] = 1;
    for (int i = 1; i <= x; ++i) {
        for (int j = 0; j < n; ++j) {
            if (coins[j] <= i)
                F[i] = (F[i] + F[i - coins[j]]) % MOD;
        }
    }
    cout << F[x] << endl;
    return 0;
}