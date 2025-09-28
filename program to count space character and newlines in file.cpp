#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int noL=0,noT=0,noS=0,noC=0;
    fp= fopen("A.txt","r");
    while(1)
    {
        ch = fgetc(fp);
        if(ch==EOF)
        break;
        noC++;
        if(ch==' ')
        noS++;
        if(ch=='\n')
        noL++;
        if(ch=='\t')
        noT++;
    }
    fclose(fp);
    printf("\n Number of Character = %d",noC);
    printf("\n Number of Blanks = %d",noS);
    printf("\n Number of Tabs = %d",noT);
    printf("\n Number of Lines = %d",noL);

}