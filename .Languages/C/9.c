#include <stdio.h>
#include <string.h>

int main(void) {
  char a[1000];
  scanf("%s", a);
  int n = strlen(a);
  a[n] = '\0';
  int l = 0, r = n - 1;
  while (l < r) {
    char temp = a[l];
    a[l] = a[r];
    a[r] = temp;
    ++l;
    --r;
  }
  printf("%s\n", a);
  return 0;
}