#include<stdio.h>
#include<stdlib.h>
#include"header.h"



void menu()
{

    int i;

    printf("\n\t1. View All Profiles.\n");
    printf("\t2. Edit Student Info.\n");
    printf("\t3. Search profile.\n");
    printf("\t4. Input Marks.\n");
    printf("\t5. Search Results.\n");
    printf("\t6. Filter Result.\n");

    printf("\n\tEnter your choice: ");

    scanf("%d", &i);


    if(i==1) outputinfo();
    if(i==2) inputinfo();
    if(i==3) searchinfo();
    if(i==4) markinput();
    if(i==5) searchresult();
    if(i==6) resultfilter();

}

