#include"header.h"

void searchbyname()
{
    char ch1[22],add[82],ch2[22];
    int roll, reg,n;
    FILE *fp;
    int i,j,len;
    printf("\tEnter the name:");
    fflush(stdin);
    gets(ch1);
    len= strlen(ch1);
    fp=fopen("info.txt","r");
    for(i=0;i<8;i++){
        int count=0;


        fgets(ch2, 22, fp);
        fgets(add, 82, fp);
        fscanf(fp, "%d", &student[i].roll);
        fscanf(fp, "%d\n", &student[i].reg);

        for(j=0;j<len;j++){
            if(toupper(ch1[j])==toupper(ch2[j])){
                count++;
            }

        }
        if(count==len){
            printf("\n\tName : %s\n\tAddress : %s\n\tRoll: %d\n\tReg: %d\n", ch2,add,student[i].roll,student[i].reg);
            printf("\n\n\tPress 0 to return to main menu");
            scanf("%d",&n);
            if(n==0){
                menu();
            }
            else return 0;

        }
        }
        printf("\n\tNo Matches!!");

        printf("\n\n\tPress 0 to return to main menu");
            scanf("%d",&n);
            if(n==0){
                menu();
            }
            else return 0;
}
