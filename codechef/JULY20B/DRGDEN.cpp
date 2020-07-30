#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 1e18
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sp(x, y) fixed << setprecision(y) << x;
#define em emplace_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define nl '\n'

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

void solve() {
  ll n, q;
  cin >> n >> q;
  vl a(n), h(n);
  for (int i = 0; i < n; i++)
    cin >> h[i];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  // 0 -> left to right 1 -> right to left
  int dir = -1;
  for (int i = 0; i < q; i++) {
    int type;
    cin >> type;
    int l, r;
    cin >> l >> r;
    if (type == 1) {
      a[l - 1] = r;
    } else {
      if (l == r) {
        cout << a[l - 1] << nl;
        continue;
      }
      if (h[l - 1] <= h[r - 1]) {
        cout << -1 << nl;
        continue;
      }
      dir = l > r ? 1 : 0;
      ll ans = 0;
      // left to right
      if (dir == 0) {
        bool ok = 1;
        ans = a[l - 1];
        for (int x = l; x < r; x++) {
          if (h[x] >= h[l - 1] && x != r - 1) {
            /* deb2(a[x], h[x]); */
            ok = 0;
            break;
          }
          if (h[x] <= h[r - 1] && x != r - 1)
            continue;
          ans += a[x];
          /* deb(ans); */
        }
        if (!ok)
          cout << -1 << nl;
        else
          cout << ans << nl;
      }
      // right to left
      else if (dir == 1) {
        bool ok = 1;
        ans = a[l - 1];
        for (int x = l - 2; x >= r - 1; x--) {
          if (h[x] >= h[l - 1] && x != r - 1) {
            ok = 0;
            break;
          }
          if (h[x] <= h[r - 1] && x != r - 1) {
            continue;
          }
          ans += a[x];
          /* deb(ans); */
        }
        if (!ok)
          cout << -1 << nl;
        else
          cout << ans << nl;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll test = 1;
  /* cin >> test; */
  while (test--) {
    solve();
  }
  return 0;
}
