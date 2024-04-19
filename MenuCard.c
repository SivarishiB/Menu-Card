#include<stdio.h>
#include<stdlib.h>

int main()
{
    menu :


 printf("\nMENU CARD");
 printf("\n1. Coffee: 20Rs");
 printf("\n2. Tea: 15RS");
 printf("\n3. Soda: 25Rs");
 printf("\n4. Milkshake: 40rs");

 int ch, a;
 printf("\nEnter the item Number:");
 scanf("%d",&ch);

 printf("\nEnter the quantity:");
 scanf("%d",&a);

 switch(ch)
 {
 case 1:
    printf("You have selected Coffee");
    printf("\nTotal price:%d",(20*a));
    break;

    case 2:
    printf("You have selected Tea");
    printf("\nTotal price:%d",(15*a));
    break;

    case 3:
    printf("You have selected Soda");
    printf("\nTotal price:%d",(25*a));
    break;

    case 4:
    printf("You have selected Milkshake");
    printf("\nTotal price:%d",(40*a));
    break;

    default:
        printf("Enter a serial number!!");
 }
 int b;
 num:
 printf("\nIf you want to reorder press 1 else press 2:");
 scanf("%d",&b);

 if(b==1)
 {
     goto menu;
 }
 else if(b==2){
    printf("\nThank you, visit again!!");
 }
 else{
    printf("\nEnter a valid number:");
    goto num;
 }

 return 0;
}
