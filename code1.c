/*Дана..*/
#include<stdio.h> 
#include<math.h>
#include<locale.h>
int main() {
setlocale (LC_CTYPE, "ua");
int a, b;
printf("Введіть значення a:");
scanf("%d", &a);
printf("Введіть значення b:");
scanf("%d", &b);
float c=sqrt(a*a+b*b);

printf("Гіпотенуза дорівнює %.2f\n", c);
int p=a+b+c;
printf("Периметр дорівнює %d\n", p);




    return 0;
}
