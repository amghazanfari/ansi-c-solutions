#include <stdio.h>

void main() {
    // if you run with \c it's givving you a warning that 
    // compiler does not know this escape character
    // and when running the code it prints c character
    // warning: unknown escape sequence: '\c'
    printf("hello, world!\c");
}