#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int main(){
    int c, n; cin >> c >> n;
    vector<int> a(n), dp(c + 1, 0);
    for(int &it : a) cin >> it;
    dp[0] = 1;
    for(int it : a){
        for (int i = c; i >= it; i--)
        {
            dp[i] += dp[i - it];
        }
    }
    int j = c;
    while (dp[j] == 0) j--;
    cout << j;
}
