#include <stdio.h>

  int i,j;
  int matrix[10][10];

    int findMin(int a,int b){
      if(a<b){
        return a;}
      else{
          return b;}
      }

     void claculate_short_path(int matrix[10][10]){//What is the shortest path among the existing paths 
       int k,i,j;
       for(k=0; k<10 ; k++){
         for(i=0;i<10;i++){
           for(j=0;j<10;j++){
               if (matrix[i][j]!=0 && matrix[i][k] !=0 && matrix[k][j] !=0){//If the connection between 2 other paths is smaller than the original route
                    matrix[i][j] = findMin(matrix[i][k] + matrix[k][j],matrix[i][j]);}
                if(matrix[i][j]==0 && i!=j && matrix[k][j]!=0 && matrix[i][k] !=0){//if the path length is 0 and it's not the same points (on dagonal)
                    matrix[i][j]=matrix[i][k]+matrix[k][j];
                }
                   }
                }
             }
          }
          
          
     void getting_matrix(int matrix[10][10]){//insert the values from input 
        for(i=0;i<10;i++){
          for(j=0;j<10;j++){
            scanf("%d",&matrix[i][j]);
            if(i==j){//fix if there is a mistake and user wrote path (value>0) to diagonal (between same points)
                matrix[i][j]=0;
                
            }
          }
        }
       }
       
       
     int check_path(int matrix[10][10],int i,int j){//is the path exist (the value isn't 0)
       if (matrix[i][j] == 0){
         return 0; 
        }
       else{
         return 1  ; 
     } 
}

int short_path(int matrix[10][10],int i,int j){//if there is a value>0, the path exists.
int checking_path= check_path(matrix,i,j);
if(checking_path == 0){
    return 0;
}
else{
    return matrix[i][j];
}
}
