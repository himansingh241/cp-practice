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

void printArr(vvi a, int n) {
  int i, j;
  cout << 2 << endl;
  fo(i, n) {
    fo(j, n) { cout << a[i][j] << ' '; }
    cout << endl;
  }
}

int solve() {
  int i, j, n, p;
  cin >> n >> p;
  vvi a(n, vi(n));
  cout << 1 << ' ' << 1 << ' ' << 1 << ' ' << n << ' ' << n << endl;
  int ones;
  cin >> ones;
  if (ones) {
    map<int, bool> mpr, mpc;
    fo (i, n) {
      cout << 1 << ' ' << i + 1 << ' ' << 1 << ' ' << i + 1 << ' ' << n << endl;
      int x;
      cin >> x;
      if (x == 0)
        mpr[i] = 1;
    }
    fo (i, n) {
      cout << 1 << ' ' << 1 << ' ' << i + 1 << ' ' << n << ' ' << i + 1 << endl;
      int x;
      cin >> x;
      if (x == 0)
        mpc[i] = 1;
    }
    fo (i, n) {
      deb(mpr[i]);
      if (mpr[i])
        continue;
      fo (j, n) {
        deb(mpc[j]);
        if (mpc[j])
          continue;
        cout << 1 << ' ' << (i + 1) << ' ' << (j + 1) << ' ' << (i + 1) << ' ' << (j + 1) << endl;
        int x;
        cin >> x;
        if (x == -1)
          return x;
        if (x) {
          a[i][j] = 1;
          ones--;
        }
        if (ones == 0)
          break;
      }
        if (ones == 0)
          break;
    }
  }
  printArr(a, n);
  int x;
  cin >> x;
  return x;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll test = 1;
  cin >> test;
  while (test--) {
    int x = solve();
    if (x == -1)
      break;
  }

  return 0;
}
