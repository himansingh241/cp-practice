#include<bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
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
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;


const int maxn = 1e6;
const int mod = 1e9 + 7;

void solve() {
    int i, j, n, m;
    cin >> n;
    vector<int> a(n), b(n);
    vector<int> pos(n + 1);
    fo (i, n)
        cin >> a[i];
    fo (i, n) {
        cin >> b[i];
        pos[b[i]] = i;
    }
    vi left(n + 1), right(n + 1);
    fo (i, n) {
        int x = i - pos[a[i]];
        if (x > 0) {
            right[n - x]++;
            left[x]++;
        }
        else {
            right[abs(x)]++;
            left[n + x]++;
        }
    }
    int m1, m2;
    m1 = *max_element(all(left));
    m2 = *max_element(all(right));
    cout << max(m2, m1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll test = 1;
    /* cin >> test; */
    while (test--)
        solve();
    return 0;
}

