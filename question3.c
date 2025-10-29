#include <stdio.h>

int main() {

int count = 1;
int image[4][4]=  
{
   {1, 0, 1, 0} , 
   {0, 1, 0, 1} ,
   {1, 1, 0, 0} ,
   {0, 0, 1, 1}   
} ;

int inverted[4][4];

for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      inverted[i][j]= 1 -image[i][j];  
        if(image[i][j] == 1){
         count++; 
      }       
   }
}

printf("Original Image:\t\t Reversed image:\n");
for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        printf("%d ", image[i][j]);
      }
   printf("\t\t");
    for (int j =0; j< 4; j++){
     printf("%d", inverted[i][j]);
     printf(" ");
}
printf("\n");
   }

printf("\n");
printf("The white pixel count is %d", count);

}