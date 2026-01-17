#include<stdio.h>
#include<conio.h>
int main()
{
int i,j;
for(i=0;i<5;i++){
 for(j=65;j<=65+i;j++){
 printf("%c",j);
 }
printf("\n");
}
getch();
return 0;
}
