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

int binS(vi a, int l, int r, int k, int m) {
  int ans = -1;
  while (l <= r) {
    int mid = (l + r) / 2;
    if ((a[mid] + k) % m != 0) {
      ans = mid;
      r = mid - 1;
    } else
      l = mid + 1;
  }
  return ans;
}

void solve() {
  int i, j, n, m;
  cin >> n >> m;
  vi a(n);
  fo(i, n) cin >> a[i];
  vi sfx(n + 1);
  Fo(i, n - 1, 0) { sfx[i] = sfx[i + 1] + a[i]; }
  int ans = -1;
  vi ss(n);
  vi idx(n);
  j = 0;
  fo(i, n) {
    if (j == 0) {
      ss[i] = sfx[i];
      idx[j] = i;
      j++;
    }
    int x = binS(ss, 0, j - 1, sfx[i + 1], m);
    if (x != -1)
      ans = max(ans, i - idx[x] + 1);
  }
  if (ans == -1)
    ans--;
  cout << ans + 1 << '\n';
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll test = 1;
  cin >> test;
  while (test--)
    solve();
  return 0;
}
