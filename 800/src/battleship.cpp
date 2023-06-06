#include <iostream>
#include <vector>

using namespace std;

void battleship() {
  int n, k, a = 0, b = 0;
  size_t p = 0;
  vector<int> v;
  cin >> n >> k;
  while (n--) {
    int i;
    cin >> i;
    v.push_back(i);
    b += i;
    if (!k) {
      b -= v[p++];
    } else {
      --k;
    }
    a = max(a, b);
  }
  cout << a;
}
