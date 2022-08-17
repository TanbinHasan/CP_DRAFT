#include <limits.h>
#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int ar[n], i;
  for (i = 0; i < n; ++i) {
    scanf("%d", &ar[i]);
  }
  int mx = INT_MIN;
  for (i = 0; i < n; ++i) {
    if (ar[i] > mx) mx = ar[i];
  }
  printf("%d\n", mx);
  return 0;
}