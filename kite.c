/*

      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
      * * *
    * * * * *
Program:
*/
#include
int main() {
  char prnt = '*';
  int i, j, k, s, nos = 4;
  for (i = 1; i <= 5; i++) {
    for (s = nos; s >= 1; s--) {
      printf("  ");
    }
    for (j = 1; j <= i; j++) {
      printf("%2c", prnt);
    }
    for (k = 1; k <= (i - 1); k++) {
      if (i == 1) {
        continue;
      }
      printf("%2c", prnt);
    }
    printf("\n");   nos--;
  }
  nos = 1;
  for (i = 4; i >= 1; i--) {
    for (s = nos; s >= 1; s--) {
      printf("  ");
    }
    for (j = 1; j <= i; j++) {
      printf("%2c", prnt);
    }
    for (k = 1; k <= (i - 1); k++) {
      printf("%2c", prnt);
    }
    nos++;
    printf("\n");
  }
  nos = 3;
  for (i = 2; i <= 5; i++) {
    if ((i % 2) != 0) {
      for (s = nos; s >= 1; s--) {
        printf("  ");
      }
      for (j = 1; j <= i; j++) {
        printf("%2c", prnt);
      }
    }
    if ((i % 2) != 0) {
      printf("\n");
      nos--;
    }
  }
  return 0;
}
