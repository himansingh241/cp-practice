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

vi a;
void solve() {
  int i, j, n, m;
  cin >> n;
  if (n == 1) {
    cout << 1 << endl;
    char c;
    cin >> c;
    return;
  }
  ll mid = 1;
  int x = 1;
  char c;
  while (true) {
    cout << x << endl;
    cin >> c;
    if (c == 'L')
      break;
  }
  int p = 0;
  map<int, char> mp;
  mp[1] = 'R';
  mp[n] = 'L';
  int l = 1, r = n;
  p = (l + (r - l) / 2);
  cout << p << endl;
  cin >> c;
  if (c == 'E')
    return;
  mid = p;
  if (c == 'L')
    r = mid;
  else if (c == 'G')
    l = mid;
  mp[p] = c;
  char c1, c2;
  while (l <= r) {
    p = mid;
    mid = (l + (r - l) / 2);
    cout << mid << endl;
    cin >> c1;
    if (c1 == 'E')
      return;
    cout << mid << endl;
    cin >> c2;
    if (c1 != c2) {
      while (true) {
        cout << p << endl;
        char q;
        cin >> q;
        if (mp[p] != q)
          break;
      }
      cout << mid << endl;
      cin >> c1;
    }
    mp[mid] = c1;
    if (c1 == 'L') {
      r = mid - 1;
    } else if (c1 == 'G') {
      l = mid + 1;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll test = 1;
  /* cin >> test; */
  while (test--)
    solve();
  return 0;
}
