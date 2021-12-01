#include <stdio.h>
#include "my_mat.h"

int i,j;

int matrix[10][10];

int main(void){
    
        int using = 1;//for while loop

        while (using)
        {
           
            char choice_of_charcter;//user input choice
            scanf(" %c", &choice_of_charcter);//A/B/C/D
            
            switch (choice_of_charcter)//cases 
            {
                case 'A':
                    for ( i = 0; i < 10; i++){//init matrix (for case of another matrix input)
                       for ( j = 0; j < 10; j++){      
                        matrix[i][j] = 0;
                       }
                     }
                    getting_matrix(matrix);//puts values from input
                    claculate_short_path(matrix);

                    break;

                case 'B':
                    scanf("%d%d", &i, &j);
                    if(check_path(matrix,i,j)==0){
                        printf("False\n");}
                    else{
                        printf("True\n");}
                    break;
                    
                case 'C':
                    scanf("%d%d", &i, &j);
                    if(short_path(matrix,i,j)==0){
                        printf("%d\n", -1);
                    }
                    else{
                        printf("%d\n", short_path(matrix,i,j));
                    }
                    break;
                case 'D':
                    using = 0;  //Ends while
                    break;

                default:
                    printf("Invalid charcter, please try again.\n");
                    break;
            }
        }
       
    

    return 0;

}
