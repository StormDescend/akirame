#define _USE_MATH_DEFINES
#define _GLIBCXX_PRINT 1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define inf LONG_LONG_MAX / 2
#define lowbit(i) (i & (-i))
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define umap unordered_map
#define uset unordered_set
#define int long long
#define __multi__ false
#define gcd __gcd

/* clang-format off */
int dx[8] = {-1, 1, 0, 0, 1, 1, -1, -1}, dy[8] = {0, 0, 1, -1, -1, 1, 1, -1};
// template <typename... Args>void print(std::format_string<Args...> fmt, Args&&... args){std::cout << std::format(fmt, std::forward<Args>(args)...);}
int ksm(int a, int b, int MOD){int res = 1;while (b){if (b & 1) res = res * a % MOD;a = a * a % MOD;b >>= 1;} return res % MOD; }
int ksm(int a, int b){int res = 1;while (b){if (b & 1) res = res * a;a = a * a;b >>= 1;}return res;}
template <class T>istream &operator>>(istream &is, vector<T> &v) {for (auto &x : v) is >> x; return is; }
template <class T>ostream& operator<<(ostream& os, vector<T> v){for (auto i : v)os << i << ' ';os << '\n';return os;}
template <class T, class U>istream &operator>>(istream &is, pair<T, U> &p) {is >> p.first >> p.second; return is; }
template<class T, class U>ostream &operator<<(ostream& os, pair<T, U> &p){os << p.first << ' ' << p.second << '\n';return os;}
string operator*(const string& s, int n) { if (n <= 0 || s.empty()) return ""s; string res; res.reserve(s.size() * n); for (int i = 0; i < n; ++i) { res += s;} return res;}
string operator*(int n, const string& s) { return s * n; }
using ll = long long;using ull = unsigned long long;using db = double;using pii = pair<int, int>;using pll = pair<ll, ll>;using pdd = pair<db, db>;using tii = tuple<int, int, int>;using vi = vector<int>;using vvi = vector<vi>;using vc = vector<char>;
struct edge{int v, w;};
/* clang-format on */

constexpr int mod1 = 1000000007;
constexpr int mod9 = 998244353;
constexpr int mod = 1e9 + 7;
// constexpr int mod = 998244353;

const int N = 2e5 + 5;
// #define __multi__ true

void Akira() {}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int _ = 1, T = 0;
  if (__multi__)
    cin >> _;
  while (_--)
    Akira();

  return (0 ^ _ ^ 0) & (T - T);
}
