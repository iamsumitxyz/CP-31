#include <bits/stdc++.h>
using namespace std;

// Speed up
#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

// Shortcuts
#define int long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

// Debug (disable before submitting)
// #ifdef DEBUG
// #define dbg(x) cerr << #x << " = " << x << endl;
// #else
// #define dbg(x)
// #endif

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;

// Type aliases
typedef vector<int> vi;
typedef pair<int, int> pii;



void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 1;
    vector<int> a(n,1);
    unordered_set<char> unique_chars;
    unique_chars.insert(s[0]);
    for(int i = 1;i<n;i++){
        if(unique_chars.find(s[i]) == unique_chars.end()){
            unique_chars.insert(s[i]);
            a[i] = a[i-1] + 1;
            cnt += a[i];
        } else {
            a[i] = a[i-1];
            cnt += a[i];
        }

    }
    cout << cnt << endl;

    // return;

}

// Main
int32_t main() {
    fastio();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
