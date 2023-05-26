#include <iostream>
#include <string>
#include <vector>

using namespace std;

void team() {
  int a, b, c, d = 0;
  for (cin >> a; cin >> a >> b >> c;) {
    d += a + b + c > 1 ? 1 : 0;
  }
  cout << d;
}
