// C:\Compilers\mingw64\include\c++\12.1.0\x86_64-w64-mingw32\bits
// C:\Compilers\mingw64\include\c++\12.1.0\ext\pb_ds

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define int long long

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

using namespace std;
using namespace __gnu_pbds;

template <class T, class C = less<T>>
using iset = tree<T, null_type, C, rb_tree_tag, tree_order_statistics_node_update>;
template <class T, class C = less_equal<T>>
using imultiset = tree<T, null_type, C, rb_tree_tag, tree_order_statistics_node_update>;
/*
  Index of lower bound & upper bound for "indexed set / multiset":
  int lb = s.order_of_key(x);
  int ub = s.order_of_key(x + 1);
*/

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  return 0;
}