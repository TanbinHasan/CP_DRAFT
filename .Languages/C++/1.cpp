#include <bits/stdc++.h>

#define int long long

using namespace std;

// #define MultipleCase       
void Solve(int tc) {
  int n, q;
  cin >> n >> q;
  int MX = (1LL << 33) - 1;
  vector<int> val(n + 1, 0);
  vector<bool> mark(n + 1);
  vector<vector<int>> adj(n + 1);
  map<pair<int,int>, int> mpval;
  for (int i = 0; i < q; ++i) {
    int a, b, x;
    cin >> a >> b >> x;
    if (a == b) {
      val[a] = x;
      mark[a] = true;
      continue;
    }
    if (a > b) swap(a, b);
    adj[a].push_back(b);
    adj[b].push_back(a);
    if (!mark[a]) val[a] |= x;
    if (!mark[b]) val[b] |= x;
    mpval[{a, b}] = mpval[{b, a}] = x;
  }
  for (int s = 1; s <= n; ++s) {
    for (auto &c : adj[s]) {
      val[s] &= mpval[{c, s}];
      val[c] &= mpval[{c, s}];
    }
  }
  for (int i = 32; i >= 0; --i) {
    for (int s = 1; s <= n; ++s) {
      if (mark[s]) continue;
      if ((bool) (val[s] & (1LL << i)) == false) continue;
      int cnt = 0;
      for (auto &c : adj[s]) {
        if (val[c] & (1LL << i)) ++cnt;
      }
      if (cnt == (int)adj[s].size()) val[s] ^= (1LL << i);
    }
  }
  for (int i = 1; i <= n; ++i) {
    cout << val[i] << " ";
  }
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