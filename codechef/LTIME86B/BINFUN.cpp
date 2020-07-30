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

string toBin(ll x) {
  string binX;
  while (x) {
    int r = x % 2;
    binX.push_back(r + '0');
    x /= 2;
  }
  reverse(all(binX));
  return binX;
}

ll findAns(ll x, ll y) {
  string binX = toBin(x);
  string binY = toBin(y);

  string binXplusY = binX + binY;
  string binYplusX = binY + binX;
  bitset<64> b1(binXplusY);
  bitset<64> b2(binYplusX);
  ll ans = b1.to_ullong() - b2.to_ullong();

  return ans;
}

void solve() {
  ll n;
  cin >> n;
  vl a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  ll ans = 0;
  /* for (int i = 0; i < n; i++) { */
  /*   for (int j = 0; j < n; j++) { */
  /*     ans = max(ans, findAns(a[i], a[j])); */
  /*   } */
  /* } */
  ans = findAns(*min_element(all(a)), *max_element(all(a)));
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

