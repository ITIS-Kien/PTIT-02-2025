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
    int t; cin >> t;
    while (t--)
    {
        int n, x; cin >> n >> x;
        int a[n];
        for (int &it : a) cin >> it;
        int *p = upper_bound(a, a + n, x);
        if(p == a) cout << -1;
        else cout << p - a;
        cout << endl;
    }   
    
}
