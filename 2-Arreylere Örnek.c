#include<stdio.h>
#include<stdlib.h>

int main () 
{

    
system("color 0a");

float toplam=0;
float sayilar[5];
int i;

for(i=0;i<5;i++)

{

    printf("sayi gir:");
    scanf("%f",&sayilar[i]);

}

for(i=0;i<5;i++)

{

    toplam=toplam+sayilar[i];
}

printf("toplam: %f", toplam);

return 0;

}
