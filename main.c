#include <stdio.h>
int i,j;
int matrix[10][10];
#define True 1;
#define False 0;
int main(){
    int using = 1;

    while (using)
    {
        printf("A: enter your 10*10 matrix\n");
        printf("B: checking if there a path beetween 2 numbers\n");
        printf("C: calcualting the shortest path beetween 2 numbers\n");
        printf("D: Exit this program\n");

        char choice_of_charcter;
        scanf(" %c", &choice_of_charcter);

        switch (choice_of_charcter)
        {
        case 'A':
         for ( i = 0; i < 10; i++){
        for ( j = 0; j < 10; j++){      
          matrix[i][j] = 0;
        }
      }
            getting_matrix(matrix);
            break;

        case 'B':
              scanf("%d%d", &i, &j);
              if(check_path(matrix,i,j)==0){
                printf("false");}
              else{
                 printf("true");}
            break;
        case 'C':
            scanf("%d%d", &i, &j);
              if(short_path(matrix,i,j)==0){
                 printf("%d", -1);
              }
              else{
                 printf("%d", matrix[i][j]);
              }
            break;
        case 'D':
            using = 0;  /* This will cause the loop to end */
            break;

        default:
            printf("Invalid charcter, please try again.\n");
            break;
        }
    }
}
