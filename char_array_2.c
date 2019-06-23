#include<stdio.h>

int main()
{
    char *fname = "ahmed";  //character array represented using a true pointer.
    char lname[20] = "ochieng"; //This is a character array

    for(int i = 0; i < 7; i++)
        printf("&lname[%d] : %X\n",i, &lname[i]);

    printf("\n");

    for(int i = 0; i < 7; i++)
        printf("(lname + %d) : %X\n",i, (lname + i));

    printf("\n");printf("\n");

    for(int i = 0; i < 5; i++)
        printf("&fname[%d] : %X\n",i, &fname[i]);

    printf("\n");

    for(int i = 0; i < 5; i++)
        printf("(fname + %d) : %X\n",i, (fname + i));

    printf("\n\n%X",lname);
    printf("\n%s\n",lname);

    printf("\n\n%X",fname);
    printf("\n%s\n",fname);

    return 0;
}

