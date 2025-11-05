#include <stdio.h>
int main(){
    int num,sum=0;
    scanf("%d",&num);
    int array[num];
    for(int i=0; i<num; i++){
        scanf("%d",&array[i]);
    }
    for(int i=0; i<num; i++){
        printf("%p\n",&array[i]);
    }
     for(int i=0; i<num; i++){
        int*par = &array[i];
        sum += *par;
    }
    printf("Sum = %d",sum);
    return 0;
}