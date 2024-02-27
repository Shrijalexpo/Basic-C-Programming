
/*Pattern 1

     *
    **
   ***
  ****
 *****
*******/

#include <stdio.h>

int pattern_2() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows - i - 1; ++j) {
            printf(" ");
        }
        for (int k = 0; k <= i; ++k) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}