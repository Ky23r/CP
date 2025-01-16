#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

#define FOR(i, l, r) for (int i = (l); i < (r); i++)
#define REP(i, n) FOR(i, 0, n)
#define ROF(i, l, r) for (int i = (r) - 1; i >= (l); i--)
#define PER(i, n) ROF(i, 0, n)
#define each(y, x) for (auto& y : (x))

#define sz(x) (int)((x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

template <class T> bool umin(T& a, const T& b) {
    return (b < a ? a = b, true : false);
}
template <class T> bool umax(T& a, const T& b) {
    return (a < b ? a = b, true : false);
}

string to_string(char x) {
    return ("\'" + string(1, x) + "\'");
}
string to_string(const string& x) {
    return ("\"" + x + "\"");
}
string to_string(const char* x) {
    return to_string((string)(x));
}
string to_string(bool x) {
    return (x ? "true" : "false");
}
string to_string(const vector<bool>& x) {
    string res;
    REP(i, sz(x))
        res += (i ? ", " : "") + to_string(x[i]);
    return ("{" + res + "}");
}
template <typename T, typename V> string to_string(const pair<T, V>& x) {
    return ("(" + to_string(x.first) + ", " + to_string(x.second) + ")");
}
template <typename T> string to_string(const T& x) {
    string res;
    int i = 0;
    each(y, x)
        res += (i++ ? ", " : "") + to_string(y);
    return ("{" + res + "}");
}
void dbg_out() {
    cerr << "]\n";
}
template <typename T, typename... V> void dbg_out(const T& t, const V&... v) {
    cerr << to_string(t);
    if (sizeof...(v))
        cerr << ", ";
    dbg_out(v...);
}

#ifdef LOCAL
#define dbg(...) cerr << __LINE__ << " | [" << #__VA_ARGS__ << "] = [", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

const char nl = '\n';
const int MOD = 1000000007;

void solve() {
    
}

int main() {
#ifdef LOCAL
    freopen("INPUT.txt", "r", stdin);
    // freopen("OUTPUT.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
