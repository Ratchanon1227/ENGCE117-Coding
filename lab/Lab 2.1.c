#include <stdio.h>
#include <string.h>

void reverse(char str1[], char str2[]) {
    int len = strlen(str1) ;
    int i, j ;

    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        str2[j] = str1[i] ;
    }
    str2[j] = '\0' ;
}

int main() {
    char text[50] = "I Love You" ;
    char out[50] ;

    reverse(text, out) ;

    printf("Original : \"%s\"\n", text) ;
    printf("Reversed : \"%s\"\n", out);
    return 0;
}