
#include <stdio.h>

int main() {

    int size = 5; 
    int column_width = 11; 
    for (int i = 1; i <= size; i++) {
        int chars_in_row = 2 * i - 1;
        
        int alpha_chars = (i == 5) ? 8 : chars_in_row; 

        for (int j = i; j <= size; j++) {
            printf(" ");
        }

        for (int j = 1; j <= chars_in_row; j++) {
            printf("*");
        }

        printf("   |"); 

        int num_spaces = (column_width - chars_in_row) / 2;
        for (int j = 1; j <= num_spaces; j++) {
            printf(" ");
        }

        for (int j = 1; j <= chars_in_row; j++) {
            printf("%d", j);
        }

        for (int j = 1; j <= num_spaces; j++) {
            printf(" ");
        }

        printf("|   ");

        int alpha_spaces = (column_width - alpha_chars) / 2;
        for (int j = 1; j <= alpha_spaces; j++) {
            printf(" ");
        }

        for (char j = 'A'; j < 'A' + alpha_chars; j++) {
            printf("%c", j);
        }
        for (int j = 1; j <= alpha_spaces; j++) {
            printf(" ");
        }

        printf("\n"); 
    }
    return 0;
}
