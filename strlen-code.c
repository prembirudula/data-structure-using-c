include<stdio.h>
#include<string.h>

int main()
{
    char name[20]="Prembirudula";
    int length;

    length = strlen(name);

    printf("Length of %s = %d\n",name,length);

    return 0;
}


