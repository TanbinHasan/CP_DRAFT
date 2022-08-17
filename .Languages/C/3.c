#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char a[1000];
  scanf("%s", &a);
  int n = strlen(a);
  a[n] = '\0';
  char b[100];
  scanf("%s", &b);
  int m = strlen(b);
  b[m] = '\0';
  int len = n + m;
  char con[len + 1];
  int i, j = 0;
  for (i = 0 ; i < n ; ++i) {
    con[j++] = a[i];
  }
  for (i = 0 ; i < m ; ++i) {
    con[j++] = b[i];
  }
  con[len] = '\0';
  printf("%s\n", con);
  return 0;
}