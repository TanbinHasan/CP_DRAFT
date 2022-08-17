#include <algorithm>
// #include <cassert>
#include <cmath>
// #include <complex>
// #include <cstdio>
#include <cstdlib>
// #include <cstring>
// #include <ctime>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
// #include <array>
// #include <bitset>
// #include <chrono>
// #include <random>
// #include <unordered_map>
// #include <unordered_set>

using namespace std;

// #define MultipleCase        
void Solve(int tc) {
  int n;
  cin >> n;
  cout << n * n;
}

int32_t main(void) {
  // ios::sync_with_stdio(false);
  // cin.tie(0);
  int tt = 1, tc = 0;
#ifdef MultipleCase
  cin >> tt;
#endif
  while (tt--) Solve(++tc);
  return 0;
}