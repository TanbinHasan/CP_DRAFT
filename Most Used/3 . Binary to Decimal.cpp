/**
 *    Author  : Ador
 *    Created : 29.08.2020
 **/
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

typedef long long int ll;

ll Binary_to_Decimal(string s) {
  reverse(s.begin(), s.end());
  ll n = 0, l = s.size();
  for (ll i = 0; i < l; ++i)
    n += (((ll)s[i] - 48) * (1LL << i));
  return n;
}
int main(void) {
  string n;
  while (cin >> n && n != "end") cout << Binary_to_Decimal(n) << "\n";
  return 0;
}
