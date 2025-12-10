#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse(char str1[]) {
    int len = strlen(str1) ;

    char *str2 = (char *)malloc((len + 1) * sizeof(char)) ;

    if (str2 == NULL ) {
        return NULL ;
    }

    int i, j ;
    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        str2[j] = str1[i] ;
    }
    str2[j] = '\0' ;
    return str2 ;
}

int main() {
    char text[50] = "I Love You" ;
    char *out ;
    out = reverse(text) ;

    if(out != NULL) {
        printf("Original : \"%s\"\n", text) ;
        printf("Reversed : \"%s\"\n", out) ;
        free(out) ;
    }
        else {
            printf("Memory Allocation Failed.\n") ;
        }
        return 0;
} 