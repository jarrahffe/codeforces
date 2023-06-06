#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void pie() {
  size_t n;
  string s;
  cin >> n;
  cin >> s;

  int ans = 0, counter[26];
  for (int i = 0; i < 26; ++i) {
    counter[i] = 0;
  }

  for (size_t i = 0; i < 2 * n - 2; i += 2) {
    ++counter[s[i] - 'a'];
    counter[s[i + 1] - 'A'] == 0 ? ++ans : --counter[s[i + 1] - 'A'];
  }

  cout << ans;
}
