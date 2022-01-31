#include<stdio.h>

int main(void){
    int searchkey;
    int values[100];
    int limit;
    int i;
    int flag=0;
    printf("enter the limit");
    scanf("%d",&limit);

    printf("enter the values");
    for(i=0;i<limit;i++){
        scanf("%d",&values[i+1]);

    }
    printf("enter the number");
    scanf("%d",&searchkey);

    for(i=0;i<limit;i++){
        if(searchkey==values[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("values found at the position %d",i+1);
    }else{
        printf("not in this array");
    }
    return 0;
}