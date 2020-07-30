#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 1e18
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << #y << "=" << y << endl
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

void solve()
{
    int h, w, k, i, j;
    cin >> h >> w >> k;
    vector<vector<char>> a(h, vector<char>(w));
    fo(i, h)
    {
        fo(j, w)
        {
            cin >> a[i][j];
        }
    }
    int maskR, maskC;
    int ans = 0;
    fo(maskR, (1 << h))
    {
        fo(maskC, (1 << w))
        {
            int cnt = 0;
            fo(i, h)
            {
                fo(j, w)
                {
                    if ((a[i][j] == '#') && ((maskR >> i) & 1) && ((maskC >> j) & 1))
                    {
                        cnt++;
                    }
                }
            }
            if (cnt == k)
                ans++;
        }
    }
    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll test = 1;
    //cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}