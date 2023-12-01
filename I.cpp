#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define FOR for(int i = 0; i < n; i++)
#define FORR for(int j = 0; j < n; j++)
#define ll long long
using namespace std;

int main(){
    faster();
    int n, result = 0;
    cin >> n;
    vector<int> a(n), f(n+1);
    FOR{
        cin >> a[i];
    }
    f[0] = 1;
    for(int i = 1; i <= n; i++){
        f[i] = 1;
        for(int j = 1; j < i; j++){
            if(a[j] < a[i]){
                f[i] = max(f[i], f[j+1]);
            }
        }
        f[i] = max(f[i], f[i-1]);
    }
    cout << f[n];
    return 0;
}
