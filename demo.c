#include<stdio.h>
// pointer arthemetic 
//typecasting
int main(void)
{
int a = 10;
int* p = &a;
printf("Address of p is %d \n", p);
printf("size of integer is %d\n", sizeof(int));
printf("Adress of p+1 is %d \n", p + 1);
printf("value of *p is %d\n", *p); //已知 a =10
printf("value of *p+1 is %d\n", *(p + 1)); // 但使用*(p+1) != 11 要注意
return 0; 
}
