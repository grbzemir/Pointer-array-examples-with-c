#include<stdio.h>
#include<stdlib.h>

int main () 
{
    int toplam;
    int sayi1; 
    int sayi2; 
    int carpim;

    sayi1=10;
    sayi2=20;
    
    int *s=&sayi1;
    int *s2=&sayi2;

    printf("%d\n",sayi1);
    printf("%d\n",sayi2);
    printf("%x\n",*s);
    printf("%x\n",*s2);

    toplam=sayi1+sayi2;
    carpim=sayi1*sayi2;
    printf("toplam: %d\n",toplam);
    printf("carpim: %d\n",carpim);


    char kelime='Gulhane Parki istanbul / Turkey';
    char *k=&kelime;
    
    printf("%c\n",kelime);
    printf("%x\n",*k);

    double sayi3=10.25;
    double *s3=&sayi3;

    printf("%f\n",sayi3);
    printf("%x\n",*s3);

    printf("\n\n Bellek Adresleri \n\n");

    printf("%x\n",&sayi1);
    printf("%x\n",&sayi2);
    printf("%x\n",&sayi3);
    printf("%x\n",&kelime);

    return 0;
}



