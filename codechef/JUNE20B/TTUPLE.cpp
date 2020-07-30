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

bool checkEq(int p, int q, int r, int a, int b, int c) {
  return ((p == a) && (q == b) && (r == c));
}

void solve() {
  int i, j, n, m;
  vi a(3), b(3);
  fo(i, 3) cin >> a[i];
  fo(i, 3) cin >> b[i];
  set<int> diff, mul;
  fo(i, 3) {
    if (b[i] == a[i])
      continue;
    diff.insert(b[i] - a[i]);

    if (b[i] % a[i] == 0)
      mul.insert(b[i] / a[i]);
  }
  if (diff.size() == 0) {
    cout << 0 << '\n';
  } else if (diff.size() == 1) {
    cout << 1 << '\n';
  } else {
    vi d(all(diff));
    int p = b[0], q = b[1], r = b[2];
    int x = a[0], y = a[1], z = a[2];
    int x1 = d[0], y1 = d[1];
    // ++
    // 0 x1 y1
    if (checkEq(x, y + x1, z + y1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // x1 y1 0
    if (checkEq(x1 + x, y1 + y, z, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // x1, 0, y1
    if (checkEq(x1 + x, y, y1 + z, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // y1, x1, 0
    if (checkEq(x + y1, y + x1, z, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // 0, y1 x1
    if (checkEq(x, y + y1, z + x1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // y1, 0, x1
    if (checkEq(x + y1, y, z + x1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // x1 y1 y1
    if (checkEq(x + x1, y + y1, z + y1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // y1 x1 y1
    if (checkEq(x + y1, y + x1, z + y1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // y1 y1 x1
    if (checkEq(x + y1, y + y1, z + x1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // y1 x1 x1
    if (checkEq(x + y1, y + x1, z + x1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // x1 y1 x1
    if (checkEq(x + x1, y + y1, z + x1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // x1 x1 y1
    if (checkEq(x + x1, y + x1, z + y1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    vi d1(all(mul));
    p = b[0], q = b[1], r = b[2];
    x = a[0], y = a[1], z = a[2];
    x1 = d1[0], y1 = d1[1];
    // **
    // 0 x1 y1
    if (checkEq(x, y * x1, z * y1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // x1 y1 0
    if (checkEq(x1 * x, y1 * y, z, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // x1, 0, y1
    if (checkEq(x1 * x, y, y1 * z, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // y1, x1, 0
    if (checkEq(x * y1, y * x1, z, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // 0, y1 x1
    if (checkEq(x, y * y1, z * x1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // y1, 0, x1
    if (checkEq(x * y1, y, z * x1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // x1 y1 y1
    if (checkEq(x * x1, y * y1, z * y1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // y1 x1 y1
    if (checkEq(x * y1, y * x1, z * y1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // y1 y1 x1
    if (checkEq(x * y1, y * y1, z * x1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // y1 x1 x1
    if (checkEq(x * y1, y * x1, z * x1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // x1 y1 x1
    if (checkEq(x * x1, y * y1, z * x1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
    // x1 x1 y1
    if (checkEq(x * x1, y * x1, z * y1, p, q, r)) {
      cout << 2 << '\n';
      return;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll test = 1;
  cin >> test;
  while (test--)
    solve();
  return 0;
}
