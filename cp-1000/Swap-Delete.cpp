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
    string s;
    cin >> s;
    pii temp = {0,0};
    int n = s.size();
    for(int i = 0;i<n;i++){
        if(s[i] == '0'){
            temp.first++;
        } else {
            temp.second++;
        }
    }
    for(int i = 0;i<n;i++){
        if(s[i] == '0'){
            temp.second--;
            if (temp.second < 0){
                cout<<temp.first<<endl;
                return;
            }



        }
        else{
            temp.first--;
            if (temp.first < 0){
                cout<<temp.second<<endl;
                return;
            }
        }
    }
    cout << 0 << endl; 
    return;

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
