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
  ll n;
  cin >> n;
  vi a(n);
  int minIndex = 0, mn = INT_MAX;
  int mxi = 0, mx = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] < mn) {
      mn  = a[i];
      minIndex = i + 1;
    }
    if (a[i] > mx) {
      mx = a[i];
      mxi = i + 1;
    }
  }
  int a1 = abs(minIndex - n);
  int a2 = abs(minIndex - 1);
  int b1 = abs(mxi - n);
  int b2 = abs(mxi - 1);
  int ans = max(max(a1, a2), max(b1, b2));
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

