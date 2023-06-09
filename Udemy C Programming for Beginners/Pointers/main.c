#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int num = 150;
    int *pNum = NULL;

    pNum = &num;

    printf("num's address: %p\n", &num);
    printf("Address of pNum: %p\n", &pNum);
    printf("value of pNum: %p\n", pNum);
    printf("value of what pNum points to: %d\n", *pNum);

    return 0;
}