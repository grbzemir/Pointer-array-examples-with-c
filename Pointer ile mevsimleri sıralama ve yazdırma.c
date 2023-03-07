#include<stdio.h>
#include<stdlib.h>

//pointer dizi kullanımı aslında pointerın pointerını kullanma

int main () 
{
    
    char *ilkbahar[3] ={"mart","nisan","mayis"} ;
    char *yaz[3] = {"haziran","temmuz","agustos"} ;
    char *sonbahar[3] ={"eylul","ekim","kasim"} ;
    char *kis[3] = {"aralik","ocak","subat"};
    
    char  **mevsimler[4];
    mevsimler[0]=ilkbahar;
    mevsimler[1]=yaz;
    mevsimler[2]=sonbahar;
    mevsimler[3]=kis;
  
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