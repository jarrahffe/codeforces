#include "candy.cpp"
#include <iostream>

using namespace std;

int main() {
  candy();
  // [+1][+2]
  // [+2][+1]
  // [+2][+2]
  // M(i)(j) = M(i-1)(j-2) + M(i-2)(j-1) + M(i-2)(j-2) + 1
  /*  int chess[21][21];
   for (int i = 0; i < 21; ++i) {
     for (int j = 0; j < 21; ++j) {
       chess[i][j] = 0;
     }
   }

   chess[0][0] = 1;
   for (int i = 1; i < 21; ++i) {
     for (int j = 1; j < 21; ++j) {
       if (i - 2 >= 0 && j - 2 >= 0) {
         chess[i][j] =
             chess[i - 1][j - 2] + chess[i - 2][j - 1] + chess[i - 2][j - 2];
       } else if (i - 2 >= 0 && j - 2 < 0) {
         chess[i][j] = chess[i - 2][j - 1];
       } else if (j - 2 >= 0 && i - 2 < 0) {
         chess[i][j] = chess[i - 1][j - 2];
       }
     }
   }
   for (int i = 0; i < 21; ++i) {
     for (int j = 0; j < 21; ++j) {
       cout << chess[i][j] << " ";
     }
     cout << endl;
   } */
}
// 89*500
