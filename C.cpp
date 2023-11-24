#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define endl "\n"
using namespace std;

int main() {
    f();
	int n, x;
    cin >> n >> x;
    int a[n], F[x + 1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i <= x; i++){
        F[i] = 1e9;
    }
    F[0] = 0;
    for(int i = 1; i <= x; ++i){
        for(int j = 0; j < n; j++){
            if(a[j] <= i){
                F[i] = min(F[i],  F[i - a[j]] + 1);
            }
        }
    }
    if(F[x] == 1e9) F[x] = -1;
    cout << F[x];
    return 0;
}