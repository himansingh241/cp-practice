#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 1e18
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

vector<vector<char>> a(4, vector<char>(4));
bool ok(char x, int r, int c)
{
    int cnt1 = 1;
    if (x == a[r + 1][c])
        cnt1++;
    if (x == a[r][c + 1])
        cnt1++;
    if (x == a[r + 1][c + 1])
        cnt1++;
    return ((cnt1 > 2) || (cnt1 == 1));
}

void solve()
{
    int n = 4;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            char x = a[i][j];
            if (ok(x, i, j))
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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