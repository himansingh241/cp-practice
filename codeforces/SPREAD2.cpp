#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int test = 1;
  cin >> test;
  while (test--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
      cin >> it;
    int ans = 1;
    int noOfPeople = arr[0];
    if (noOfPeople >= n - 1) {
      cout << ans << '\n';
      continue;
    }
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0] + 1;
    for (int i = 1; i < n; i++) {
      prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    int i = noOfPeople;
    while (noOfPeople < n - 1) {
      ans++;
      if (arr[i] >= n) {
        break;
      }
      noOfPeople += prefixSum[arr[i]];
      i += arr[i];
    }
    cout << ans << '\n';
  }
  return 0;
}
