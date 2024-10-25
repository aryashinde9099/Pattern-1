#include<stdio.h>
void main(){
      int row;
      printf("Enter no of row:\n");
      scanf("%d",&row);

      int x=1;
      for(int i=1;i<=row;i++){
        for(int j=0;j<=row;j++){
          printf("%d ",i+j);
          
          
        }
        
        printf("\n");
      }
}
