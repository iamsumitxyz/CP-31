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
    int n,k;
    cin >> n >> k;
    vi a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = INF;
   
    for(int i = 0;i<n;i++){
        int temp = a[i]%k;
        if(temp == 0) ans = 0;
        else{
            ans = min(ans,k-temp);
        }
    }
    if(k!= 4){
        cout << ans << endl;
    }
    else{
        if(ans == 0){
            cout << ans << endl;
        }
        else{
            int cnte = 0;
            for(int i = 0;i<n;i++){
                if(a[i]%2 == 0){
                    cnte++;
                }
            }
            // printf("%lld even count\n", cnte);
            if(cnte == 0){
                if(a.size() == 1){
                    cout<<ans<<endl;
                }
                else{
                   

                    cout<<min(ans,2LL)<<endl;
                }

            }
            else if(cnte == a.size() || cnte >1){
                if(a.size() == 1){
                    cout<<ans<<endl;
                }
                else{
                    cout<<0<<endl;
                }
            }
            else{
                cout<<1<<endl;
            }
        }
        
    }
    
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
