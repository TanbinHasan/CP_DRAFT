#include <stdio.h>

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);
  int mat[n][m], i, j;
  for (i = 0; i < n; ++i) {
    for (j = 0; j < m; ++j) {
      scanf("%d", &mat[i][j]);
    }
  }
  for (i = 0 ; i < n ; ++i) {
    printf("Sum of row no. %d: ", i + 1);
    int sum = 0;
    for (j = 0 ; j < m ; ++j) {
      sum += mat[i][j];
    }
    printf("%d\n", sum);
  }
  printf("\n");
  for (i = 0 ; i < m ; ++i) {
    printf("Sum of column no. %d: ", i + 1);
    int sum = 0;
    for (j = 0 ; j < n ; ++j) {
      sum += mat[j][i];
    }
    printf("%d\n", sum);
  }
  return 0;
}