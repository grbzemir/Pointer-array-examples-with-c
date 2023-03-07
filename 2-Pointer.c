#include<stdio.h>
#include<stdlib.h>

int main () {
    
    system("color 0a");

    char harf='E';
    char *p=&harf;

    printf("**** BELLEK ADRESLERİ *** \n");

    printf("Adres: %x\n",&p); // 61ff18

    p++;

    printf("adres 2: %x\n",p); // 61ff20

    p--;

    printf("adres 3: %x\n",p); // 61ff18
    













    return 0;
}
