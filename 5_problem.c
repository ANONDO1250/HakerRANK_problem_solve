#include <stdio.h>

int main() {
  int n, max = 0, count = 0;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (c > max) {
      max = c;
      count = 1;
    } else if (c == max) {
      count++;
    }
  }
  printf("%d\n%d\n", max, count);
  return 0;
}
