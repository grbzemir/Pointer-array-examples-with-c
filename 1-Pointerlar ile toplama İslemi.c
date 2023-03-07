#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main () {

// pointerlar aracılığıyla toplama islemi;

int s1;
int s2;
int sonuc;

system("color 0a");

printf("1.sayiyi giriniz:");

scanf("%d", &s1);

printf("2.sayiyi giriniz:");

scanf("%d", &s2);

int *p1;
int *p2;

p1=&s1;
p2=&s2;

sonuc=*p1+*p2;

printf("toplam: %d", sonuc);

return 0;
}