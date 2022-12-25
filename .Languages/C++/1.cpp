#include <bits/stdc++.h>

#define int long long

using namespace std;

vector<vector<vector<int>>> val;

int Fun(string &s, int pos, int n, int prv1, int prv2) {
  if (pos == n) return 1;
  int &ret = val[pos][prv2][prv1];
  
}

// #define MultipleCase       
void Solve(__attribute__((unused)) int tc) {
  int n;
  cin >> n;
  string s;
  cin >> s;
  val.assign(n + 5, vector<vector<int>>(27, vector<int>(27, -1)));

}

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt = 1, tc = 0;
#ifdef MultipleCase
  cin >> tt;
#endif
  while (tt--) Solve(++tc);
  return 0;
}