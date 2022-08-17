#include <stdio.h>
#include <string.h>

int main(void) {
  char s[1000];
  gets(s);
  int n = strlen(s);
  s[n] = '\0';
  printf("%s\n", s);
  printf("Total characters: %d\n", n);
  return 0;
}