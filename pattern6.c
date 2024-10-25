#include <stdio.h>

void main() {
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    int x = 1;
    char ch = 'A';

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= 4; j++) {
            if (j % 2 == 0) {
                printf("%d ", x);
                x++;
            } else {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }

   
}
