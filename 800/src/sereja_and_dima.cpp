#include <iostream>
#include <vector>

using namespace std;

void sereja() {
  int n, v[1000], ans = 0, sum = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
    sum += v[i];
  }
  int l = 0, r = n - 1;
  while (l <= r) {
    ans += v[r] > v[l] ? v[r--] : v[l++];
    if (l > r)
      break;
    v[r] > v[l] ? --r : ++l;
  }
  cout << ans << " " << sum - ans;
}
