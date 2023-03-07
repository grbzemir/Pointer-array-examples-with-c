#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int selectionsort(int arr[],int size) {
int i,j;
int minimumindex;

for(i=0;i<size;i++)
{
    minimumindex=i;
    for(j=i+1;j<size;j++)
{
    if(arr[j]<arr[minimumindex])
    {
        minimumindex=j;
    }
}
    int temp=arr[i];
    arr[i]=arr[minimumindex];
    arr[minimumindex]=temp;
}
}
int main () 

{

system("color 0a");
int array[MAX],size;
int i;

printf("dizi kaç elemanli olsun:");
scanf("%d",&size);

for(i=0;i<size;i++)


{

    printf("dizinin %d. elemanini giriniz:",i+1);
    scanf("%d",&array[i]);

}

selectionsort(array,size);
for(i=0;i<size;i++)

{

    printf("%d ",array[i]);

}

return 0;
}




