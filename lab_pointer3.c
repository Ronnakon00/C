#include <stdio.h>
int main(){
    int num,max;
    scanf("%d",&num);
    int array[num];
    for(int i=0; i<num; i++){
        scanf("%d",&array[i]);
    }
    for(int i=0; i<num-1; i++){
        int*ptr1 = &array[i];
        int*ptr2 = &array[i+1];
        if(*ptr1 <= *ptr2){
            max = *ptr2;
        }
    }
    printf("Max = %d",max);
    return 0;
}
