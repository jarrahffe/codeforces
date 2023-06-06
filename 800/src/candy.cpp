#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void candy() {

  int k, n, max_candy = 0, min_candy = 0;
  cin >> k >> n;
  vector<int> candy;
  while (n--) {
    int i;
    cin >> i;
    candy.push_back(i);
    max_candy += i;
    min_candy = max(min_candy, i);
  }
  while (min_candy < max_candy) {
    int avg = (min_candy + max_candy) / 2;

    int bags = 1;
    int current_weight = 0;
    for (int x : candy) {
      if (current_weight + x > avg) {
        ++bags;
        current_weight = x;
      } else {
        current_weight += x;
      }
    }
    if (bags <= k) {
      max_candy = avg;
    } else {
      min_candy = avg + 1;
    }
  }
  cout << max_candy;
}

// 20 13 13 10 10
// 20
// 13 10
// 13 10
//

// 7 6 5 4 1 = 25 / 2 = 13
// 7
// 6 1
// 5 4
// correct

// 8 5 5 4 4 = 26
// 8 4
// 5 5 4
//
// 8 5
// 5 4 4
// correct

// 3 3 2 2 2 = 12 / 2 = 6
// 3 3
// 2 2 2
// 6
// correct

// 3 3 2 2 2 2
// 3 2 2
// 3 2 2
// correct
