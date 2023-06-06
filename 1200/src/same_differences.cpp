#include <iostream>
#include <unordered_map>

using namespace std;
void diff() {
  int t;
  cin >> t;

  int n;
  while (t--) {
    cin >> n;
    unordered_map<int, int> map;
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      ans += map[x - i]++;
    }
    cout << ans << endl;
  }
}
