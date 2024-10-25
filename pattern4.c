#include <stdio.h>

void main() {
    
    int rows;
    printf("Enter no of rows:\n");
    scanf("%d",&rows);

    
    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < rows; j++) {
            
            char ch = 'A' + i + j;
            printf("%c ", ch);
        }
        
        printf("\n");
    }

    
}
