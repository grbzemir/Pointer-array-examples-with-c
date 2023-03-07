#include<stdio.h>
#include<stdlib.h>

//pointer dizi kullanımı aslında pointerın pointerını kullanma

int main () 
{
    char *ilkbahar[3];
    {
        ilkbahar[1]="Mart";
        ilkbahar[2]="Nisan";
        ilkbahar[3]="Mayıs";
    }

    char *yaz[3];
    {
        yaz[1]="Haziran";
        yaz[2]="Temmuz";
        yaz[3]="Ağustos";
    }

    char *sonbahar[3];
    {
        sonbahar[1]="Eylül";
        sonbahar[2]="Ekim";
        sonbahar[3]="Kasım";
    }

    char *kis[3];
    {
        kis[1]="Aralık";
        kis[2]="Ocak";
        kis[3]="Şubat";
    }

    char **mevsimler[4];
    {
        mevsimler[0]=ilkbahar;
        mevsimler[1]=yaz;
        mevsimler[2]=sonbahar;
        mevsimler[3]=kis;
    }
    
    int i;
    int j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%s \t", mevsimler[i][j]);
        }
    }
    printf("\n");
    system("color 0a");

    return 0;
}