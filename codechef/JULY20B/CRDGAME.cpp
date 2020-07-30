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

int digitSum(int n) {
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

// Chef -> 1 , Morty -> 0, Draw -> 2
int roundWinner(int c, int m) {
  if (digitSum(c) > digitSum(m)) {
    return 1;
  }
  if (digitSum(m) > digitSum(c))
    return 0;
  else
    return 2;
}

void solve() {
  ll n;
  cin >> n;
  int c, m;
  int chef = 0, morty = 0;
  while (n--) {
    cin >> c >> m;
    if (roundWinner(c, m) == 1) {
      chef++;
    } else if (roundWinner(c, m) == 0) {
      morty++;
    } else {
      morty++;
      chef++;
    }
  }
  if (chef > morty) {
    cout << 0 << ' ' << chef;
  } else if (chef < morty) {
    cout << 1 << ' ' << morty;
  } else {
    cout << 2 << ' ' << chef;
  }
  cout << nl;
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
