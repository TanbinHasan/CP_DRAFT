/**
 *    Author  : Ador
 *    Created : 29.08.2020
 **/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef long long int ll;
string Decimal_to_Binary(ll n)
{
    string s;
    for (ll i = 0; i < 60; ++i)
        s += bool(n & (1LL << i)) + 48; // Here , (1 << i) is also called "AND Mask"
                                        // 1LL is same as (ll)1
    reverse(s.begin(), s.end());
    return s;
}
int main(void)
{
    ll n;
    cin >> n;
    for (int i = n; i <= n; ++i) {
      cout << Decimal_to_Binary(i) << "\n";
    }
    return 0;
}