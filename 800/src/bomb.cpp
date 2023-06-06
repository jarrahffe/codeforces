#include <algorithm>
#include <cstddef>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void bomb() {
  size_t n, k;
  cin >> n >> k;
  size_t l = 0, r = 0, ci = k - 1, mi = k - 1;
  unordered_set<size_t> set;
  vector<size_t> v;
  while (n--) {
    size_t i;
    cin >> i;
    v.push_back(i);
  }
  sort(v.begin(), v.end());

  while (r < v.size() && l < v.size() - 1) {
    if (l == r) {
      ++r;
    }

    size_t lval = v[l], rval = v[r];

    if (rval > lval && rval < lval + k) {
      set.emplace(lval);
      if (!set.count(rval)) {
        --ci;
        set.emplace(rval);
        mi = min(mi, ci);
        if (mi == 0) {
          break;
        }
      }
      ++r;
    }

    else {
      if (set.count(lval)) {
        set.erase(lval);
        ci += ci == k - 1 ? 0 : 1;
      }
      ++l;
    }
  }
  cout << mi;
}
// current insertions Ci = k - 1
// min insertions Mi = k - 1

// go through array starting at idx 0
// assume that starting at each number, we need to insert K - 1 numbers after
// it to make a valid strictly increasing subarray
//
//
// left and right pointer, l & r = 0
// while r++ < N
//  add l value to set
//  if l == r increment r
//
//  if r value is in range of l value + 1 and l value + K - 1
//    if r value is not present in set, decrement Ci, add it to set, update Mi
//    to min (Mi, Ci)
//    increment r
//
//  else
//    if l value is present in set, remove it and increment Ci if Ci != k - 1
//    increment l

//
//  1, 2, 4, 4, 5, 5, 5, 7, 20, 30
// 1 2 3 18 18 18 19
// k = 4
// current insertions = 0
// min insertions = 0
// 1 2 4 5 6 7
