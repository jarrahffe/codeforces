#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void subarray_sum_equals_k() {
  int n, k, sum = 0, ans = 0;
  cin >> n >> k;
  vector<int> vec;
  unordered_map<int, int> map;
  map[0] = 1;

  while (n--) {
    int i;
    cin >> i;
    vec.push_back(i);
  }

  for (int x : vec) {
    sum += x;
    ans += map[sum - k];
    map[sum]++;
  }
  cout << ans;
}
