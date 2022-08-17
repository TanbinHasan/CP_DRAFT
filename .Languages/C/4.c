#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main(void) {
  char s[2000];
  scanf("%s", &s);
  int n = strlen(s);
  s[n] = '\0';
  char rev[2000];
  strcpy(rev, s);
  rev[n] = '\0';
  strrev(rev);
  if (strcmp(s, rev) == 0) {
    printf("Palindrome\n");
  } else {
    printf("Not Palindrome\n");
  }
  return 0;
}