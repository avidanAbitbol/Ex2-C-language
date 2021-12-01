#include <stdio.h>
#define true 1
#define false 0
int i,j;
int matrix[10][10];
void claculate_short_path(int matrix[10][10]){
int k,i,j;
for(k=0; k<=10 ; k++){
 for(i=0;i<=10;i++){
  for(j=0;j<=10;j++){
   if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
}
}
}
}
void getting_matrix(int matrix[10][10]){
for(i=0;i<10;i++){
  for(j=0;j<10;j++){
  scanf("%d",&matrix[i][j]);
  }
}
claculate_short_path(matrix);
}
int check_path(int matrix[10][10],int i,int j){
if (matrix[i][j] == 0){
return 0; 
}
else{
return 1  ; 
} 
}

int short_path(int matrix[10][10],int i,int j){
if(check_path == 0){
    return 0;
}
else{
    
    return matrix[i][j];
}
}
