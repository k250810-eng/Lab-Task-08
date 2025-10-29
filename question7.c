#include <stdio.h>
int main(){

int size = 6;


   for (int i = 1; i <= size ; i++)
   {


       for (int j = i; j <= size; j++)
       {
         printf(" ");
       }

       for (int j = 1; j < i; j++)
       {
         printf("*");
       }

       for (int j = 3; j <= i; j++)
       {
         printf("*");
       }
       
      printf("\t | \t");


       
       for (int j = i; j <= size; j++)
       {
         printf(" ");
       }

       for (int j = 1; j < i; j++)
       {
         printf("%d",j);
       }
          for (int j = 3; j <= i; j++)
       {
         printf("%d",j);
       }
      
      printf("\t | \t");



          for (int j = i; j <= size; j++)
       {
         printf(" ");
       }
       
       for (char j = 'A'; j < 'A'+ i - 1 ; j++)
       {
         printf("%c",j);  
       }

         for (char j = 'A'; j < 'A'+ i ; j++)
       {
         printf("%c",j);  
       }
      
     printf("\n");  
   }
   return 0;
}