#include <iostream>
#include <string>
#include <vector>

using namespace std;
using si = size_t;
/* A. Hit the Lottery
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Allen has a LOT of money. He has 𝑛
 dollars in the bank. For security reasons, he wants to withdraw it in cash (we
will not disclose the reasons here). The denominations for dollar bills are
1 , 5 , 10 , 20 , 100 . What is the minimum number of bills Allen could receive
after withdrawing his entire balance?

Input
The first and only line of input contains a single integer 𝑛
 (1≤𝑛≤109
).

Output
Output the minimum number of bills that Allen could receive.
*/

// dp solution O(n) O(n)
void lottery_dp() {
  si n;
  cin >> n;
  ++n;
  int nn = static_cast<int>(n);

  vector<int> dp(n, nn);
  vector<si> bills{1, 5, 10, 20, 100};
  dp[0] = 0;

  for (si i = 1; i < n; ++i) {
    int ii = static_cast<int>(i);

    for (si b : bills) {
      int bb = static_cast<int>(b);
      if (ii++ - bb >= 0) {
        dp[i] = min(dp[i], dp[i - b] + 1);
      }
    }
  }

  cout << dp[n - 1];
}

// math solution O(1) O(1)
void lottery() {
  int n;
  cin >> n;
  cout << (n / 100 + n % 100 / 20 + n % 20 / 10 + n % 10 / 5 + n % 5);
}
// 1,5,10,20,100
// 0 1 2 3 4 5 6 7 8 9 10
// 0 1 2 3 4 1 2 3 4 5 1
