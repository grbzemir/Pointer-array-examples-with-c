#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

int main () {

    printf("pointer ile aritmetik ortlama hesabi yapan program:");
    system("color 0a");
    
    
    int sayilar[5];
    int i;
    int j;
    int toplam=0;
    int *ptr;
    int sonuc=0;


    printf("lütfen 5 sayi giriniz: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &sayilar[i]);
    }
    ptr = &sayilar[0];
    for(j=0; j<5; j++)
    {
        toplam = toplam + *ptr;
        ptr++;
    }
    
    sonuc= toplam/5;
    printf("aritmetik ortalamasi: %d", sonuc);

    return 0;
}

