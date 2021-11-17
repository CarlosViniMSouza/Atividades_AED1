//
// Created by CarlosViniMSouza on 27/10/2021.
//

#include <stdio.h>

int writeLine() {

    int i;

    putchar('\n');
    for(i=0; i<19; i++) {
        putchar('*');
    }
    putchar('\n');
}

int main() {

    int i;
    writeLine();

    putchar('\n');
    for (i=0; i<14; i++) {
        printf("%d", i);
    }
    putchar('\n');

    writeLine();
    putchar('\n');
}
