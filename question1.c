#include <stdio.h>

int main(){


float Table[3][4]={0};
float marks;
float avg [3] = {0};
float sum = 0;

int rowsize = 3;
int colsize = 4;

for(int i=0; i< rowsize; i++){
   for(int j=0; j< colsize ; j++){
        
      printf("-----Enter marks %d for class %d-----\n",j+1,i+1);
      scanf("%f",&marks);
      Table[i][j] = marks;
      sum+=Table[i][j];
   } 
   avg[i] = (sum)/colsize;
   sum=0;
   printf("\n");
}



for(int i=0; i< rowsize; i++){
    printf("class %d:", i+1);
    printf("   ");
   for(int j=0; j< colsize ; j++){
     printf("%.1f",Table[i][j]);
     printf("   ");
}
printf("Average: %.1f", avg[i]);
printf("\n");
}

}
