// when you don't write include line the compiler does not recognize
// the printf function so it gives this error
// note: include ‘<stdio.h>’ or provide a declaration of ‘printf‘
#include <stdio.h>

// if you don't put void compiler gives you a warning
// warning: return type defaults to ‘int’ [-Wimplicit-int]
void main() {
    // if you miss the whole line it'll compile but does not show anything
    // but if you just miss the ; character you're gonna get this error
    // error: expected ‘;’ before ‘}’ token
    printf("hello, world!\n");
}