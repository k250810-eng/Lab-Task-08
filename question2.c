#include <stdio.h>

int main(){

int family[2][12];

for(int i=0; i<2; i++){
    for(int j=0; j<12; j++){
       printf("Enter the number of photos for %d year, %d month \n", i+1, j+1);
       scanf("%d", &family[i][j]);
    }
}


for(int i=0; i<2; i++){
    for(int j=0; j<12; j++){
       printf("year %d, Month %d, %d photos \n",i+1,j+1,family[i][j]);      
    }
}

}