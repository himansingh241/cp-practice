#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define inf 1e18
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sp(x, y) fixed << setprecision(y) << x;
#define em emplace_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626

typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const int maxn = 1e6;
const int mod = 1e9 + 7;

vi a(maxn);
void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int z = 0;
  bool flag = 0;
  int ans = 0;
  /* if (n == k) { */
  /*   cout << 1 << '\n'; */
  /*   return; */
  /* } */
  int l = -1, r = -1;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0') {
      z++;
      continue;
    }
    if (s[i] == '1') {
      if (!flag) {
        l = 0;
        z -= k;
      } else {
        l += k + 1;
        z -= (2 * k);
      }
      flag = 1;
      if (z <= 0) {
        z = 0;
        l = i;
        continue;
      }
      r = i - k;
      for (int j = l; j < r; j += k + 1) {
        /* deb2(i, j); */
        ans++;
      }
      z = 0;
      l = i;
    }
  }
  /* deb2(l, r); */
  if (l == -1 && r == -1) {
    l = 0;
    r = n;
    for (int j = l; j < r; j += k + 1) {
      ans++;
    }
  } else if (z > k) {
    l += k + 1;
    for (int j = l; j < n; j += k + 1) {
      ans++;
    }
  }
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll test = 1;
  cin >> test;
  while (test--)
    solve();
  return 0;
}
