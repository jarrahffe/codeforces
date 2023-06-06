#include "same_differences.cpp"
#include <unordered_map>
#include <vector>

int main() {
  int n, k, ans = 0, sum = 0;
  cin >> n >> k;
  vector<int> v;
  unordered_map<int, int> map;
  while (n--) {
    int i;
    cin >> i;
    v.push_back(i);
  }

  for (int x : v) {
    sum += x;
    ans += map[sum - k];
    map[sum]++;
  }

  cout << ans;
}
