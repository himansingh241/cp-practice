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
  ll mn = LLONG_MAX;
  map<ll, ll> mp, mpa, mpb;
  ll x = 0;
  for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    x ^= a;
    mp[a]++;
    mpa[a]++;
    mn = min(mn, a);
  }
  for (int i = 0; i < n; i++) {
    ll b;
    cin >> b;
    x ^= b;
    mp[b]++;
    mpb[b]++;
    mn = min(mn, b);
  }
  if (x) {
    cout << -1 << nl;
    return;
  }
  /* bool ok = 1; */
  /* for (auto it : mp) { */
  /*   if (it.second & 1) { */
  /*     ok = 0; */
  /*     break; */
  /*   } */
  /* } */
  /* if (!ok) { */
  /*   cout << -1 << nl; */
  /*   return; */
  /* } */
  ll ans = 0;
  vl a1, b1;
  for (auto it : mp) {
    if (mpa[it.first] > mpb[it.first]) {
      ll diff = mpa[it.first] - mpb[it.first];
      diff /= 2;
      while (diff--) {
        a1.em(it.first);
      }
    } else if (mpa[it.first] < mpb[it.first]) {
      ll diff = mpb[it.first] - mpa[it.first];
      diff /= 2;
      while (diff--) {
        b1.em(it.first);
      }
    }
  }
  int m = a1.size();
  sortall(a1);
  sortall(b1);
  reverse(all(b1));
  for (int i = 0; i < m; i++)
    ans += min(2 * mn, min(a1[i], b1[i]));
  cout << ans << nl;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
  return 0;
}

