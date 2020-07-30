#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll unsigned long long
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
  ll i, j, n, m;
  cin >> n;
  string s = "codeforces";
  deque<char> q;
  ll l = s.size();
  ll idx = l - 1;
  if (n == 1) {
    cout << s;
    return;
  }
  bool flag = 1;
  for (i = 0; i <= log2(n); i++) {
    if (flag) {
      flag = 0;
      q.push_back('s');
    } else {
      flag = 1;
      q.push_front('e');
    }
  }
  /* if (ceil(log2((long double)n)) == floor(log2((long double)n))) { */
  /*   deb(flag); */
  /*   if (flag) { */
  /*     flag = 0; */
  /*     q.push_back('s'); */
  /*   } else { */
  /*     flag = 1; */
  /*     q.push_front('e'); */
  /*   } */
  /* } */
  cout << s;
  for (int i = 0; i < q.size(); i++)
    cout << q[i];
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll test = 1;
  /* cin >> test; */
  while (test--)
    solve();
  return 0;
}
