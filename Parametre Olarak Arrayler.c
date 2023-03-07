#include<stdio.h>
#include<stdlib.h>


// int size ile arreyin boyutunu belirliyoruz


int carp(int matris[],int size)
{

int carpim=1;

int toplam=0;

int i=0;

for(i=0;i<size;i++)

{

    carpim=carpim*matris[i];

}


return carpim;


}

int main () 
{

system("color 0a");

int sayilar [5] = {1,2,3,4,5};

printf("%d",carp(sayilar,5));

printf("%d",topla(sayilar,5));



return 0;
}


















int main () {