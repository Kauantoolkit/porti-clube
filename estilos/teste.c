#include <stdio.h>
#include <stdlib.h>

int main(){
int mat [3][3],i,j,soma=0;
float media;
for(i=0;i<3:i++){
    for(j=0;j<3;j++){
        scanf("%i",&mat[i][j]);
        soma=soma+mat[i][j];

    }
}
media=soma/9;
printf("a media e... %f\n",media);
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%i",mat[i][j]);

    }
}
system("pause");
}