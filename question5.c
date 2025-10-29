#include <stdio.h>
int main (){

int grid[4][4]=
{
{12,15,10,9},
{11,8,12,13},
{14,13,9,7},
{16,11,10,8}
};

for(int i =0 ; i<4 ; i++){
  for(int j=0 ; j<4 ; j++){

   int current = grid[i][j];
   int iscold=1;
      
   if(i>0 && current>=grid[i-1][j]){
      iscold = 0;
   }

   if(i<3 && current>=grid[i+1][j]){
      iscold = 0;
   }
    
   if(j>0 && current>=grid[i][j-1]){
      iscold = 0;
   }

   if(j<3 && current>=grid[i][j+1]){
      iscold = 0;
   }

   if(iscold){
         printf("At position (%d,%d) with temperature %d \n",i+1,j+1,grid[i][j]);

   }
      }
  }
}
