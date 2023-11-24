#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define endl "\n"
using namespace std;

int main() {
    f();
	int n, count = 0;
    cin >> n;
    while( n > 0){
        int a = 0;
        int b =  n;
        while (b > 0){
            int c = b % 10;
            a = max(a, c);
            b /= 10;
        }
        n -= a;
        count++;
    }
    cout << count;
    return 0;
}