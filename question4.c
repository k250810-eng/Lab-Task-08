#include <stdio.h>
int main(){

int cinema[3][3] = {
{1,0,1},
{0,0,1},
{1,1,0}
};

printf("The cinema seats are as shown: \n");

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
       printf("%d", cinema[i][j]);
       printf(" ");
   }
   printf("\n \n");
}


for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        
      if (cinema[i][j] == 0){
         printf("row number %d and seat number %d is available \n",i+1,j+1);
        }
    }
    printf("\n");
}

}