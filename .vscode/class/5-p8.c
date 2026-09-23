#include <stdio.h>

int main() {
    char ch='c';

    if ( 'a'<=ch && ch<='z'){
    ch = ch - 'a'+'A';
    printf("%c",ch);
    }
    return 0;
}