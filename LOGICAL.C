#include<stdio.h>
void main(){
int a,b;
clrscr();
printf("Enter the value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);
if(a!=10 || b!=20){
printf("success");
}
else{
printf("Fail");
}
getch();
}