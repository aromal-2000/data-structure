#include<stdio.h>
int main(void){



printf("enter the number");
int i,j,values[3][3];
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&values[i][j]);
    }
}
printf("enter the values are:::\n");

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",values[i][j]);
    }
    printf("\n");

}

return 0;

}
