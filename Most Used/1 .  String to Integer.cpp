/**
 *    Author : Tanbin_Hasan
 *    Created : 21.02.2021
**/
#include <bits/stdc++.h>

using namespace std ;

template<class T>
T stoi(string s) {
  if (s.empty()) {
    return 0 ;
  }
  int l = (int) s.size() ;
  T n = 0 ;
  for (int i = 0 ; i < l - 1 ; ++i) {
    n += (s[i] - '0') ;
    n *= 10 ;
  }
  return n + (s.back() - '0') ;
}

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  string s ;
  cin >> s ;
  cout << stoi<int>(s) ;
  return 0 ;
}