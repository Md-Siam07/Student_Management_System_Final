#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void searchbyroll();

void searchinfo()
{
    printf("\n    =======================================\n");
    int x;


    printf(" \n\n\t#1. for Searching by Roll.\n");
    printf(" \t#2. for Searching by Batch.\n");
    printf(" \t#3. for Searching by Name.");
    printf("\n \tEnter your choice: ");
    scanf("%d", &x);

    if(x==1) searchbyroll();
    if(x==2) searchbybatch();


}

