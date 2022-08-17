/**
 *    Author : Tanbin_Hasan
 *    Created : 03.05.2021 14:52:23
**/
#include <bits/stdc++.h>

using namespace std ;

struct MyHash {
  static uint64_t hash(uint64_t x) {
    x += 0x9e3779b97f4a7c15 ;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9 ;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb ;
    return x ^ (x >> 31) ;
  }
  size_t operator()(uint64_t x) const {
    return hash(x) ;
  }
} ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  /* 
    This function is applicable for only Hasing data structures 
    Declarations :
    unordered_map<type1 , type2 , MyHash> name ;
    unordered_set<type1 , MyHash> name ;
  */
  return 0 ;
}