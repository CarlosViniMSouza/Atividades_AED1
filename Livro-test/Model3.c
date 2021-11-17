#include <stdio.h>

void line(int num, char ch) {

  int i;

  for(i=1; i<num; i++) {
    putchar(ch);
  }
  putchar('\n');
}

void main() {

  line(3, '+');
  line(5, '-');
  line(7, '*');
  line(5, '-');
  line(3, '+');

}