#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100] ;
    int vowel_count ;
    char *char_ptr = sentence ;

    printf("Enter a sentence : ") ;

    if(fgets(sentence, 100, stdin) == NULL) {
        return 1 ;
    }

    sentence[strcspn(sentence, "\n")] = '\0' ;
    vowel_count = 0 ;

    while (*char_ptr != '\0') {
        if (*char_ptr == 'a' || *char_ptr == 'e' || *char_ptr == 'i' || *char_ptr == 'o' || *char_ptr == 'u' ||
            *char_ptr == 'A' || *char_ptr == 'E' || *char_ptr == 'I' || *char_ptr == 'O' || *char_ptr == 'U') {
            vowel_count++;
        }
        char_ptr++ ;
    }
printf("\n--- STRING ANALYSIS REPORT ---\n") ;
printf("Input String : \"%s\"\n", sentence) ;
printf("Total Vowel Count : %d\n", vowel_count) ;
return 0 ;
}