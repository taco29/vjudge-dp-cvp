#include<bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
using namespace std;

bool change(int n){
    while(n > 0){
        int num = n % 10;
        if(num == 4 || num == 7){
            return true;
        }
        n /= 10;
    }
    return false;
}

int main() {
    f();
    int t;
    cin >> t;
    while(t--){
        int n, count = 0;
        cin >> n;
        for(int i = 1; i <=sqrt(n); i++){
            if(n % i == 0){
                if(change(i)){
                    count++;
                }
                if(i != sqrt(n) && change(n/i)){
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}