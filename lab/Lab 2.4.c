#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitter, char str2[][10], int *count) {
    int i = 0 ;
    int row = 0 ;
    int col = 0 ;

    while (str1[i] != '\0') {
        if (str1[i] == splitter) {
            str2[row][col] = '\0' ;
            row++ ;
            col = 0 ;
        }
            else {
                str2[row][col] = str1[i] ;
                col++ ;
            }
            i++ ;
    }
    str2[row][col] = '\0' ;
    *count = row + 1 ;
}

int main() {
    char out[20][10] ;
    int num = 0 ;

    char intput_str[] = "I/Love/You" ;
    char separator = '/' ;

    explode(intput_str, separator, out, &num);

    printf("Original String : \"%s\" (Splitter : '%c)\n", intput_str, separator) ;
    printf("Total Parts : %d\n", num) ;
    for (int k = 0; k < num; k++) {
        printf("str2[%d] = \"%s\"\n", k, out[k]) ;
    }
    return 0;
}