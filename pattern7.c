#include <stdio.h>

int main() {
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 0; i <= row; i++) {
        for (char ch = 'D'; ch >= 'A'; ch--) {
            printf("%c%d ", ch, 'D' - ch + 1);
        }
        printf("\n");
    }

    return 0;
}
