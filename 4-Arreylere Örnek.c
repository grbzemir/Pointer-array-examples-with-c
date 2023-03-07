#include<stdio.h>
#include<stdlib.h>

int bastir(int matris[][5],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
}
int main () {

int matris[3][5];
int i,j;

printf("matrisin elemanlarini giriniz:");
for(i=0;i<3;i++)
{
    for(j=0;j<5;j++)
    {
        scanf("%d",&matris[i][j]);
    }
}

bastir(matris,3);

return 0;
}



