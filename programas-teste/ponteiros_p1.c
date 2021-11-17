#include <stdio.h>

int main() {

  int id = 0;
  int *p1;

  p1 = &id;
  *p1 = 10;

  printf("\nThe memory space is: %d | Memory Initial Address: %x", sizeof(id), &p1);
  printf("\nThe new content is: %d", id);

  return 0;
}