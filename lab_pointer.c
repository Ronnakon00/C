#include <stdio.h>

int main(){
    char Char = 'w';
    int Number = 10;
    float Float = 12.34;
    char *pname = &Char;
    int *pint = &Number;
    float *pnumber = &Float;

    printf("char = %c at %p\n",*pname,&Char);
    printf("int = %d at %p\n",*pint,&Number);
    printf("float = %.2f at %p\n",*pnumber,&Float);
    
    return 0;
}

