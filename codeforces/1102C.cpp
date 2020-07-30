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
  ll n, x, y;
  cin >> n >> x >> y;
  vi a(n);
  vi grt;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (x >= a[i])
      grt.em(a[i]);
  }
  if (x > y) {
    cout << n;
    return;
  }
  if (n == 1) {
    if (grt.empty()) {
      cout << "0\n";

    } else {
      cout << "1\n";
    }
    return;
  }
  int m = grt.size();
  int ans = ceil((double(m) / (double)2));
  cout << ans << nl;
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
