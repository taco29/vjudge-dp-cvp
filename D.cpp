#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define endl "\n"
using namespace std;

const int MOD = 1e9 + 7, N = 1e6 + 1;
int f[N];

int main() {
    f();
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    f[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = a[i]; j <= x; j++){
            f[j] = (f[j] + f[j-a[i]]) % MOD;
        }
    }
    cout << f[x] << endl;
    return 0;
}
