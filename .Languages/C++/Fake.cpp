#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace __gnu_pbds;
using namespace std;
template <class T, class Cmp = less<T>>
using iset = tree<T, null_type, Cmp, rb_tree_tag, tree_order_statistics_node_update>;
template <class T, class Cmp = less_equal<T>>
using imultiset = tree<T, null_type, Cmp, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ldb;

/* * * * * * * * * * * * * * * * * * variables * * * * * * * * * * * * * * * * * * * * * * */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

void Soul_2(void) {
}

void Body_1(void) {
  
}

void Spirit(void) {
  Body_1();
  Soul_2();
}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll tt = 1;
  // cin >> tt; // Danger
  for (ll tc = 1; tc <= tt; ++tc) {
    Spirit();
  }
  return 0;
}