/*Дана програма вираховує гіпотенузу та периметр трикутника*/
#include<stdio.h> 
#include<math.h>
#include<locale.h>

int main() {
setlocale (LC_CTYPE, "ua");
    
int a, b; //Оголошуємо змінні
printf("Введіть значення a та b:"); 
scanf("%d %d" , &a, &b  ); //Введення змінних

float c=sqrt(a*a+b*b); //знаходження гіпотенузи
int p=a+b+c; //знаходження периметру
    
printf("Гіпотенуза дорівнює %.2f\n", c);
printf("Периметр дорівнює %d\n", p); //Виведення результату




    return 0; //кінець програми
}
