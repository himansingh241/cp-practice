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
#define INF 100000

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

struct P {
  int x, y;
};

int ort(P p, P q, P r) {
  int res = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
  if (res == 0)
    return 0;
  return (res > 0) ? 1 : 2;
}
void printHull(vector<P> hull) {
  int i;
  fo(i, hull.size()) { deb2(hull[i].x, hull[i].y); }
  cout << '\n';
}
bool onSegment(P p, P q, P r) {
  if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && q.y <= max(p.y, r.y) &&
      q.y >= min(p.y, r.y))
    return false;
  return true;
}

vector<P> convexHull(vector<P> pts) {
  int n = pts.size();
  vector<P> hull;
  if (n < 3)
    return hull;
  int l = 0;
  int i;
  Fo(i, 1, n) {
    if (pts[i].x < pts[l].x) {
      l = i;
    }
  }
  int p = l, q;
  do {
    hull.emplace_back(pts[p]);
    q = (p + 1) % n;
    int i = 0;
    fo(i, n) {
      if (ort(pts[p], pts[i], pts[q]) == 2)
        q = i;
    }
    p = q;
  } while (p != l);
  return hull;
}

bool doIn(P p1, P q1, P p2, P q2) {
  int o1 = ort(p1, q1, p2);
  int o2 = ort(p1, q1, q2);
  int o3 = ort(p2, q2, p1);
  int o4 = ort(p2, q2, q1);

  if (o1 != o2 && o3 != o4)
    return true;
  if (o1 == 0 && onSegment(p1, p2, q1))
    return true;
  if (o2 == 0 && onSegment(p1, q2, q1))
    return true;
  if (o3 == 0 && onSegment(p2, p1, q2))
    return true;
  if (o4 == 0 && onSegment(p2, q1, q2))
    return true;
  return false;
}

bool isIn(vector<P> polygon, P p) {
  int n = polygon.size();
  if (n < 3)
    return false;
  P extreme = {INF, p.y};
  int count = 0, i = 0;
  do {
    int next = (i + 1) % n;
    if (doIn(polygon[i], polygon[next], p, extreme)) {
      if (ort(polygon[i], p, polygon[next]) == 0)
        return onSegment(polygon[i], p, polygon[next]);

      count++;
    }
    i = next;
  } while (i != 0);

  return count & 1;
}

int countD(vector<P> a, vector<P> hull, P q) {
  int m = hull.size();
  int n = a.size();
  int cnt = 0;
  vector<vector<P>> hulls;
  vector<P> a1 = a;
  while (hull.size() > 0) {
    /* printHull(hull); */
    /* printHull(a); */
    if (isIn(hull, q)) {
      int i;
      cnt++;
      fo(i, m) {
        auto it = a.begin();
        while (it != a.end()) {
          if ((it->x == hull[i].x) && (it->y == hull[i].y)) {
            it = a.erase(it);
          } else if ((it->x == q.x) && (it->y == q.y)) {
            it = a.erase(it);
          } else {
            ++it;
          }
        }
      }
      hulls.emplace_back(hull);
      hull = convexHull(a);
    } else
      break;
  }
  int i;
  bool flag = 1;
  int ans = 0;
  map<int, bool> mp;
  for (int i = hulls.size() - 1; i >= 0; i--) {
    vector<P> cur = hulls[i];
    int x = 0;
    tr(it, cur) {
      if (it->x == q.x && it->y == q.y)
        continue;
      int iit;
      flag = false;
      for (int j = 0; j < a1.size(); j++) {
        if (a1[j].x == q.x && a1[j].y == q.y)
          continue;
        if (mp[j])
          continue;
        if (it->x == a1[j].x && it->y == a1[j].y) {
          iit = j;
          flag = 1;
          mp[iit] = 1;
          break;
        }
      }
      if (flag) {
        x++;
      }
    }
    int j;
    fo (j, a1.size()) {
      if (mp[j])
        continue;
      if (a1[j].x == q.x && a1[j].y == q.y)
        continue;
      if (isIn(hull, a1[j])) {
        x = 0;
        break;
      }
    }
    if (x == 0)
      break;
    if (x == cur.size())
      ans++;
  }
  return ans;
}

void solve() {
  int i, j, n, q;
  cin >> n >> q;
  vector<P> a(n), qr(q);
  fo(i, n) {
    int x, y;
    cin >> x >> y;
    a[i].x = x;
    a[i].y = y;
  }
  vector<P> hull = convexHull(a);
  i = 0;
  fo(i, q) {
    int x, y;
    cin >> x >> y;
    qr[i].x = x;
    qr[i].y = y;
  }
  fo(i, q) {
    int ans = countD(a, hull, qr[i]);
    cout << ans << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
#endif
  int test = 1;
  cin >> test;
  while (test--)
    solve();
  return 0;
}
